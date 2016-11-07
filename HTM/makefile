PRJ = HTM
VER = 1.0
SHO = lib$(PRJ).so
OUT = $(SHO).$(VER)

WRKSPC = /Users/admin/Developer/SCM/WOD
PRJDIR = $(WRKSPC)/$(PRJ)
INCDIR = $(PRJDIR)/inc
SRCDIR = $(PRJDIR)/src
OBJDIR = $(PRJDIR)/obj
OUTDIR = $(PRJDIR)/out
LIBDIR = $(WRKSPC)/LIB

SRCFLS = $(wildcard $(SRCDIR)/*.cpp)
OBJFLS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCFLS))
INCLUD = -I$(INCDIR)

REFINC = 
REFLIB = 

MD = mkdir
RM = rm
LN = ln -s
CC = g++

SOFLAGS = -Wall -fPIC -c
SHFLAGS = -shared -Wl -L$(LIBDIR)

$(SHO): $(LIBDIR) $(OUT) 
	$(LN) $(OUTDIR)/$(OUT) $(LIBDIR)/$(SHO)

$(OUT): $(OBJDIR) $(OUTDIR) $(OBJFLS)
	$(CC) $(SHFLAGS) $(REFLIB) $(OBJFLS) -o $(OUTDIR)/$(OUT)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(INCLUD) $(REFINC) $(SOFLAGS) $< -o $@

$(OBJDIR):
	$(MD) $(OBJDIR)

$(OUTDIR):
	$(MD) $(OUTDIR)

$(LIBDIR):
	$(MD) $(LIBDIR)

clean:
	$(RM) -rf $(OBJDIR) $(OUTDIR) $(LIBDIR)/$(SHO)
	