#Jessica Shaughnessy
#jis6cd
#11/27/2017
#Makefile
#lab section 106

CXXFLAGS = -Wall -O2 -g
CXX = clang++
OFILES= middleearth.o traveling.o
DOXYGEN = Doxyfile
.SUFFIX:.o .cpp

a.out: $(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES)
	doxygen $(DOXYGEN)

clean:
	-rm -f *.o*~
