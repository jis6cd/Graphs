<!-- Generator: GNU source-highlight 3.1.8
by Lorenzo Bettini
http://www.lorenzobettini.it
http://www.gnu.org/software/src-highlite -->
<pre><tt><i><font color="#9A1900">/*! \class MiddleEarth</font></i>
<i><font color="#9A1900">    \brief creates MiddleEarth</font></i>

<i><font color="#9A1900">    contains all mehtods and variables needed for MiddleEarth</font></i>
<i><font color="#9A1900">*/</font></i>
<b><font color="#000080">#include</font></b> <font color="#FF0000">&lt;iostream&gt;</font>
<b><font color="#000080">#include</font></b> <font color="#FF0000">&lt;vector&gt;</font>
<b><font color="#000080">#include</font></b> <font color="#FF0000">&lt;string&gt;</font>
<b><font color="#000080">#include</font></b> <font color="#FF0000">&lt;map&gt;</font>

<i><font color="#9A1900">/*! \def MIDDLEEARTH_H</font></i>
<i><font color="#9A1900">    \brief class definition of MiddleEarth</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">    defines all mehtods and variables for MiddleEarth class. </font></i>
<i><font color="#9A1900">*/</font></i>
<b><font color="#000080">#ifndef</font></b> MIDDLEEARTH_H
<b><font color="#000080">#define</font></b> MIDDLEEARTH_H
<i><font color="#9A1900">/*! \namespace std</font></i>
<i><font color="#9A1900">    \brief using namespace std</font></i>

<i><font color="#9A1900">    this document uses the namespace std</font></i>
<i><font color="#9A1900">*/</font></i>
<b><font color="#0000FF">using</font></b> <b><font color="#0000FF">namespace</font></b> std<font color="#990000">;</font>

<b><font color="#0000FF">class</font></b> <font color="#008080">MiddleEarth</font> <font color="#FF0000">{</font>
<b><font color="#0000FF">private</font></b><font color="#990000">:</font>
  
<i><font color="#9A1900">/*! \var num_city_names</font></i>
<i><font color="#9A1900">  \var xsize</font></i>
<i><font color="#9A1900">  \var ysize</font></i>
<i><font color="#9A1900">  \brief private variables</font></i>
<i><font color="#9A1900">  </font></i>
<i><font color="#9A1900">    int num_city_names, int xsize, int ysize</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#009900">int</font> num_city_names<font color="#990000">,</font> xsize<font color="#990000">,</font> ysize<font color="#990000">;</font>
<i><font color="#9A1900">/*! \var xpos</font></i>
<i><font color="#9A1900">  \var ypos</font></i>
<i><font color="#9A1900">  \brief private variables</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">    vector&lt;float&gt; xpos, ypos</font></i>
<i><font color="#9A1900">    two empty vectors</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#008080">vector&lt;float&gt;</font> xpos<font color="#990000">,</font> ypos<font color="#990000">;</font>
<i><font color="#9A1900">/*! \var cities </font></i>
<i><font color="#9A1900">  \brief private variable</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">    vector&lt;string&gt; cities</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#008080">vector&lt;string&gt;</font> cities<font color="#990000">;</font>
<i><font color="#9A1900">/*! \var distances </font></i>
<i><font color="#9A1900">  \brief private variable</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">    float pointer distances</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#009900">float</font> <font color="#990000">*</font>distances<font color="#990000">;</font>
<i><font color="#9A1900">/*! \var indices </font></i>
<i><font color="#9A1900">  \brief private variable</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">    map&lt;string, int&gt; indices</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#008080">map&lt;string, int&gt;</font> indices<font color="#990000">;</font>

<b><font color="#0000FF">public</font></b><font color="#990000">:</font>
<i><font color="#9A1900">/*! \brief constructor for MiddleEarth</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">     MiddleEarth constructor takes the the size of the land (in the integers </font></i>
<i><font color="#9A1900">     xsize and ysize), the number of cities (in the integer numcities), and </font></i>
<i><font color="#9A1900">     the number of seeds (in the integer seed)</font></i>
<i><font color="#9A1900">     \param xsize an integer argument</font></i>
<i><font color="#9A1900">     \param ysize an integer argument</font></i>
<i><font color="#9A1900">     \param numcities an integer argument</font></i>
<i><font color="#9A1900">     \param seed an integer argument</font></i>
<i><font color="#9A1900">*/</font></i>
    <b><font color="#000000">MiddleEarth</font></b> <font color="#990000">(</font><font color="#009900">int</font> xsize<font color="#990000">,</font> <font color="#009900">int</font> ysize<font color="#990000">,</font> <font color="#009900">int</font> numcities<font color="#990000">,</font> <font color="#009900">int</font> seed<font color="#990000">);</font>
<i><font color="#9A1900">/*! \brief deconstructor for MiddleEarth</font></i>
<i><font color="#9A1900">      </font></i>
<i><font color="#9A1900">    the deconstructor is called when delete is called on a MiddleEarth </font></i>
<i><font color="#9A1900">    object or when the MiddleEarth object goes out of scope</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#990000">~</font><b><font color="#000000">MiddleEarth</font></b><font color="#990000">();</font>
<i><font color="#9A1900">/*! \brief void method</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">      method to print</font></i>
<i><font color="#9A1900">      prints out the city names and where the cities are located</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#009900">void</font> <b><font color="#000000">print</font></b><font color="#990000">();</font>
<i><font color="#9A1900">/*! \brief void method</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">      method to print the Table</font></i>
<i><font color="#9A1900">      prints a table full of the distances between cities</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#009900">void</font> <b><font color="#000000">printTable</font></b><font color="#990000">();</font>
<i><font color="#9A1900">/*! \brief getDistance method</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">      gets the distance between two cities</font></i>
<i><font color="#9A1900">      \param city1 is a string argument</font></i>
<i><font color="#9A1900">      \param city2 is a string argument</font></i>
<i><font color="#9A1900">      \returns float of distance between city1 and city2</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#009900">float</font> <b><font color="#000000">getDistance</font></b> <font color="#990000">(</font><font color="#008080">string</font> city1<font color="#990000">,</font> <font color="#008080">string</font> city2<font color="#990000">);</font>
<i><font color="#9A1900">/*! \brief getItinerary method</font></i>
<i><font color="#9A1900">    </font></i>
<i><font color="#9A1900">     gets the Itinerary for the trip</font></i>
<i><font color="#9A1900">     \param length is an unsigned int</font></i>
<i><font color="#9A1900">     \returns vector&lt;string&gt; of random cities to go to</font></i>
<i><font color="#9A1900">*/</font></i>
    <font color="#008080">vector&lt;string&gt;</font> <b><font color="#000000">getItinerary</font></b><font color="#990000">(</font><font color="#009900">unsigned</font> <font color="#009900">int</font> length<font color="#990000">);</font>
<font color="#FF0000">}</font><font color="#990000">;</font>

<b><font color="#000080">#endif</font></b>
</tt></pre>
