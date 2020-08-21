EXENAME = HistMaker.exe

OBJS = pTDistribution.o pTDistributionDraw.o pTDistributionFill.o pTDistributionHist.o pTDistributionRPCRun3.o pTDistributionoffline.o pTDistributionTGCRun3.o

AR = g++
CXX = g++

ROOTINCS = $(shell root-config --cflags)
ROOTLIBS = $(shell root-config --glibs)

CXXFLAGS = -g -Wall -fPIC $(ROOTINCS)
SOFLAGS = -shared

all: $(OBJS)
	$(CXX) -o $(EXENAME) $(OBJS) $(ROOTLIBS)

%.o:%.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o:%.C
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o:%.cc

clean:
	rm -f HistMaker.exe pTDistribution.o pTDistributionDraw.o pTDistributionFill.o pTDistributionHist.o pTDistributionRPCRun3.o pTDistributionoffline.o pTDistributionTGCRun3.o

