<!-- Generator: GNU source-highlight 3.1.8
by Lorenzo Bettini
http://www.lorenzobettini.it
http://www.gnu.org/software/src-highlite -->
<pre><tt><b><font color="#000080">#include</font></b> <font color="#FF0000">&lt;iostream&gt;</font>
<b><font color="#000080">#include</font></b> <font color="#FF0000">&lt;stdio.h&gt;</font>
<b><font color="#000080">#include</font></b> <font color="#FF0000">&lt;stdlib.h&gt;</font>
<b><font color="#000080">#include</font></b> <font color="#FF0000">&lt;algorithm&gt;</font>
<i><font color="#9A1900">/*! \namespace std</font></i>
<i><font color="#9A1900">  \brief using namespace std</font></i>
<i><font color="#9A1900">  </font></i>
<i><font color="#9A1900">  this document uses the namespace std</font></i>
<i><font color="#9A1900">*/</font></i>
<b><font color="#0000FF">using</font></b> <b><font color="#0000FF">namespace</font></b> std<font color="#990000">;</font>

<b><font color="#000080">#include</font></b> <font color="#FF0000">"middleearth.h"</font>
<i><font color="#9A1900">/**</font></i><font color="#009900">@brief</font><i><font color="#9A1900"> computeDistance method</font></i>
<i><font color="#9A1900"> *</font></i>
<i><font color="#9A1900"> * computes the distance between two cities in a given land of type</font></i>
<i><font color="#9A1900"> * MiddleEarth.</font></i>
<i><font color="#9A1900"> * </font></i><font color="#009900">@return</font><i><font color="#9A1900"> float</font></i>
<i><font color="#9A1900"> * </font></i><font color="#009900">@param</font><i><font color="#9A1900"> me is a MiddleEarth object that is passed by reference</font></i>
<i><font color="#9A1900"> * </font></i><font color="#009900">@param</font><i><font color="#9A1900"> start is a string object where the journey starts</font></i>
<i><font color="#9A1900"> * </font></i><font color="#009900">@param</font><i><font color="#9A1900"> dests is a vector</font></i><b><font color="#0000FF">&lt;string&gt;</font></b><i><font color="#9A1900"> that holds all the cities in the itenerary</font></i>
<i><font color="#9A1900"> */</font></i>
<font color="#009900">float</font> <b><font color="#000000">computeDistance</font></b> <font color="#990000">(</font><font color="#008080">MiddleEarth</font> <font color="#990000">&amp;</font>me<font color="#990000">,</font> <font color="#008080">string</font> start<font color="#990000">,</font> <font color="#008080">vector&lt;string&gt;</font> dests<font color="#990000">);</font>
<i><font color="#9A1900">/**</font></i><font color="#009900">@brief</font><i><font color="#9A1900"> printRoute method</font></i>
<i><font color="#9A1900"> *</font></i>
<i><font color="#9A1900"> * prints the Route that the traveler is taking</font></i>
<i><font color="#9A1900"> * </font></i><font color="#009900">@param</font><i><font color="#9A1900"> start is the string which the traveler starts at</font></i>
<i><font color="#9A1900"> * </font></i><font color="#009900">@param</font><i><font color="#9A1900"> dests is a vector</font></i><b><font color="#0000FF">&lt;string&gt;</font></b><i><font color="#9A1900"> of all the cities the traveler needs to </font></i>
<i><font color="#9A1900"> * go to</font></i>
<i><font color="#9A1900"> */</font></i>
<font color="#009900">void</font> <b><font color="#000000">printRoute</font></b> <font color="#990000">(</font><font color="#008080">string</font> start<font color="#990000">,</font> <font color="#008080">vector&lt;string&gt;</font> dests<font color="#990000">);</font>
<i><font color="#9A1900">/**</font></i><font color="#009900">@brief</font><i><font color="#9A1900"> main method</font></i>
<i><font color="#9A1900"> *</font></i>
<i><font color="#9A1900"> * reads 5 command line parameters: width, height, num_cities, rand_seed, </font></i>
<i><font color="#9A1900"> * cities_to_visit.</font></i>
<i><font color="#9A1900"> * </font></i><font color="#009900">@return</font><i><font color="#9A1900"> int</font></i>
<i><font color="#9A1900"> * </font></i><font color="#009900">@param</font><i><font color="#9A1900"> argc the first value of the comman line prompt, an int</font></i>
<i><font color="#9A1900"> * </font></i><font color="#009900">@param</font><i><font color="#9A1900"> argv the second value of the command line promt, a char**</font></i>
<i><font color="#9A1900"> */</font></i>
<font color="#009900">int</font> <b><font color="#000000">main</font></b> <font color="#990000">(</font><font color="#009900">int</font> argc<font color="#990000">,</font> <font color="#009900">char</font> <font color="#990000">**</font>argv<font color="#990000">)</font> <font color="#FF0000">{</font>
<i><font color="#9A1900">/** checking to see if the correct amount of parameters were given</font></i>
<i><font color="#9A1900">*</font></i>
<i><font color="#9A1900">* if the correct number of files were given, then this if statement is</font></i>
<i><font color="#9A1900">* ignored. If not, then this if statement is triggered and the code exits</font></i>
<i><font color="#9A1900">* with exit(0)</font></i>
<i><font color="#9A1900">*/</font></i>
    <b><font color="#0000FF">if</font></b> <font color="#990000">(</font> argc <font color="#990000">!=</font> <font color="#993399">6</font> <font color="#990000">)</font> <font color="#FF0000">{</font>
        cout <font color="#990000">&lt;&lt;</font> <font color="#FF0000">"Usage: "</font> <font color="#990000">&lt;&lt;</font> argv<font color="#990000">[</font><font color="#993399">0</font><font color="#990000">]</font> <font color="#990000">&lt;&lt;</font> <font color="#FF0000">" &lt;world_height&gt; &lt;world_width&gt; "</font>
             <font color="#990000">&lt;&lt;</font> <font color="#FF0000">"&lt;num_cities&gt; &lt;random_seed&gt; &lt;cities_to_visit&gt;"</font> <font color="#990000">&lt;&lt;</font> endl<font color="#990000">;</font>
        <b><font color="#000000">exit</font></b><font color="#990000">(</font><font color="#993399">0</font><font color="#990000">);</font>
    <font color="#FF0000">}</font>
    <font color="#009900">int</font> width<font color="#990000">,</font> height<font color="#990000">,</font> num_cities<font color="#990000">,</font> rand_seed<font color="#990000">,</font> cities_to_visit<font color="#990000">;</font>
    <b><font color="#000000">sscanf</font></b> <font color="#990000">(</font>argv<font color="#990000">[</font><font color="#993399">1</font><font color="#990000">],</font> <font color="#FF0000">"%d"</font><font color="#990000">,</font> <font color="#990000">&amp;</font>width<font color="#990000">);</font>
    <b><font color="#000000">sscanf</font></b> <font color="#990000">(</font>argv<font color="#990000">[</font><font color="#993399">2</font><font color="#990000">],</font> <font color="#FF0000">"%d"</font><font color="#990000">,</font> <font color="#990000">&amp;</font>height<font color="#990000">);</font>
    <b><font color="#000000">sscanf</font></b> <font color="#990000">(</font>argv<font color="#990000">[</font><font color="#993399">3</font><font color="#990000">],</font> <font color="#FF0000">"%d"</font><font color="#990000">,</font> <font color="#990000">&amp;</font>num_cities<font color="#990000">);</font>
    <b><font color="#000000">sscanf</font></b> <font color="#990000">(</font>argv<font color="#990000">[</font><font color="#993399">4</font><font color="#990000">],</font> <font color="#FF0000">"%d"</font><font color="#990000">,</font> <font color="#990000">&amp;</font>rand_seed<font color="#990000">);</font>
    <b><font color="#000000">sscanf</font></b> <font color="#990000">(</font>argv<font color="#990000">[</font><font color="#993399">5</font><font color="#990000">],</font> <font color="#FF0000">"%d"</font><font color="#990000">,</font> <font color="#990000">&amp;</font>cities_to_visit<font color="#990000">);</font>
    <i><font color="#9A1900">// Create the world, and select your itinerary</font></i>
    <font color="#008080">MiddleEarth</font> <b><font color="#000000">me</font></b><font color="#990000">(</font>width<font color="#990000">,</font> height<font color="#990000">,</font> num_cities<font color="#990000">,</font> rand_seed<font color="#990000">);</font>
    <font color="#008080">vector&lt;string&gt;</font> old_dests <font color="#990000">=</font> me<font color="#990000">.</font><b><font color="#000000">getItinerary</font></b><font color="#990000">(</font>cities_to_visit<font color="#990000">);</font>
    <font color="#008080">string</font> start <font color="#990000">=</font> old_dests<font color="#990000">[</font><font color="#993399">0</font><font color="#990000">];</font>
    <font color="#008080">vector&lt;string&gt;</font> dests<font color="#990000">;</font>
    <b><font color="#0000FF">for</font></b> <font color="#990000">(</font><font color="#009900">int</font> k <font color="#990000">=</font> <font color="#993399">1</font><font color="#990000">;</font> k<font color="#990000">&lt;</font>old_dests<font color="#990000">.</font><b><font color="#000000">size</font></b><font color="#990000">();</font> k<font color="#990000">++)</font><font color="#FF0000">{</font>
      dests<font color="#990000">.</font><b><font color="#000000">push_back</font></b><font color="#990000">(</font>old_dests<font color="#990000">[</font>k<font color="#990000">]);</font>
    <font color="#FF0000">}</font>
    <font color="#009900">float</font> min <font color="#990000">=</font> <b><font color="#000000">computeDistance</font></b><font color="#990000">(</font>me<font color="#990000">,</font> start<font color="#990000">,</font> dests<font color="#990000">);</font>
    <font color="#008080">vector&lt;string&gt;</font> shortest <font color="#990000">=</font> dests<font color="#990000">;</font>
    <i><font color="#9A1900">//printRoute("Bree", dests);</font></i>
    <i><font color="#9A1900">//cout &lt;&lt; "Distance: " &lt;&lt; computeDistance(me, "Bree", dests) &lt;&lt; endl;</font></i>
    <b><font color="#000000">sort</font></b><font color="#990000">(</font>dests<font color="#990000">.</font><b><font color="#000000">begin</font></b><font color="#990000">(),</font> dests<font color="#990000">.</font><b><font color="#000000">end</font></b><font color="#990000">());</font>
    <b><font color="#0000FF">while</font></b> <font color="#990000">(</font><b><font color="#000000">next_permutation</font></b><font color="#990000">(</font>dests<font color="#990000">.</font><b><font color="#000000">begin</font></b><font color="#990000">(),</font> dests<font color="#990000">.</font><b><font color="#000000">end</font></b><font color="#990000">()))</font><font color="#FF0000">{</font>
      <b><font color="#0000FF">if</font></b> <font color="#990000">(</font>min <font color="#990000">&gt;</font> <b><font color="#000000">computeDistance</font></b><font color="#990000">(</font>me<font color="#990000">,</font> start<font color="#990000">,</font> dests<font color="#990000">))</font><font color="#FF0000">{</font>
    min <font color="#990000">=</font> <b><font color="#000000">computeDistance</font></b><font color="#990000">(</font>me<font color="#990000">,</font> start<font color="#990000">,</font> dests<font color="#990000">);</font>
    shortest <font color="#990000">=</font> dests<font color="#990000">;</font>
      <font color="#FF0000">}</font>
    <font color="#FF0000">}</font>
    cout <font color="#990000">&lt;&lt;</font> <font color="#FF0000">"Minimum path has distance : "</font> <font color="#990000">&lt;&lt;</font> min <font color="#990000">&lt;&lt;</font> <font color="#FF0000">": "</font><font color="#990000">;</font>
    <b><font color="#000000">printRoute</font></b><font color="#990000">(</font>start<font color="#990000">,</font> shortest<font color="#990000">);</font>
    <i><font color="#9A1900">//cout &lt;&lt; "Distance: " &lt;&lt; min &lt;&lt; endl;</font></i>
    <b><font color="#0000FF">return</font></b> <font color="#993399">0</font><font color="#990000">;</font>
<font color="#FF0000">}</font>

<i><font color="#9A1900">// This method will compute the full distance of the cycle that starts</font></i>
<i><font color="#9A1900">// at the 'start' parameter, goes to each of the cities in the dests</font></i>
<i><font color="#9A1900">// vector IN ORDER, and ends back at the 'start' parameter.</font></i>
<font color="#009900">float</font> <b><font color="#000000">computeDistance</font></b> <font color="#990000">(</font><font color="#008080">MiddleEarth</font> <font color="#990000">&amp;</font>me<font color="#990000">,</font> <font color="#008080">string</font> start<font color="#990000">,</font> <font color="#008080">vector&lt;string&gt;</font> dests<font color="#990000">)</font> <font color="#FF0000">{</font>
  <font color="#009900">int</font> lastI <font color="#990000">=</font> dests<font color="#990000">.</font><b><font color="#000000">size</font></b><font color="#990000">()-</font><font color="#993399">1</font><font color="#990000">;</font>
  <font color="#009900">float</font> ret <font color="#990000">=</font> me<font color="#990000">.</font><b><font color="#000000">getDistance</font></b><font color="#990000">(</font>start<font color="#990000">,</font> dests<font color="#990000">[</font><font color="#993399">0</font><font color="#990000">])</font> <font color="#990000">+</font> me<font color="#990000">.</font><b><font color="#000000">getDistance</font></b><font color="#990000">(</font>start<font color="#990000">,</font> dests<font color="#990000">[</font>lastI<font color="#990000">]);</font>
  <b><font color="#0000FF">for</font></b> <font color="#990000">(</font><font color="#009900">int</font> j <font color="#990000">=</font> <font color="#993399">0</font><font color="#990000">;</font> j<font color="#990000">&lt;</font>lastI<font color="#990000">;</font> j<font color="#990000">++)</font><font color="#FF0000">{</font>
    ret <font color="#990000">+=</font> me<font color="#990000">.</font><b><font color="#000000">getDistance</font></b><font color="#990000">(</font>dests<font color="#990000">[</font>j<font color="#990000">],</font> dests<font color="#990000">[</font>j<font color="#990000">+</font><font color="#993399">1</font><font color="#990000">]);</font>
  <font color="#FF0000">}</font>
  
  <b><font color="#0000FF">return</font></b> ret<font color="#990000">;</font>
<font color="#FF0000">}</font>

<i><font color="#9A1900">// This method will print the entire route, starting and ending at the</font></i>
<i><font color="#9A1900">// 'start' parameter.  The output should be of the form:</font></i>
<i><font color="#9A1900">// Erebor -&gt; Khazad-dum -&gt; Michel Delving -&gt; Bree -&gt; Cirith Ungol -&gt; Erebor</font></i>
<font color="#009900">void</font> <b><font color="#000000">printRoute</font></b> <font color="#990000">(</font><font color="#008080">string</font> start<font color="#990000">,</font> <font color="#008080">vector&lt;string&gt;</font> dests<font color="#990000">)</font> <font color="#FF0000">{</font>
  cout <font color="#990000">&lt;&lt;</font> start <font color="#990000">&lt;&lt;</font> <font color="#FF0000">" -&gt; "</font><font color="#990000">;</font>
  <b><font color="#0000FF">for</font></b> <font color="#990000">(</font><font color="#009900">int</font> i <font color="#990000">=</font> <font color="#993399">0</font><font color="#990000">;</font> i<font color="#990000">&lt;</font>dests<font color="#990000">.</font><b><font color="#000000">size</font></b><font color="#990000">();</font> i<font color="#990000">++)</font><font color="#FF0000">{</font>
    cout <font color="#990000">&lt;&lt;</font> dests<font color="#990000">[</font>i<font color="#990000">]</font> <font color="#990000">&lt;&lt;</font> <font color="#FF0000">" -&gt; "</font><font color="#990000">;</font>
  <font color="#FF0000">}</font>
  cout <font color="#990000">&lt;&lt;</font> start <font color="#990000">&lt;&lt;</font> endl<font color="#990000">;</font>
<font color="#FF0000">}</font>
</tt></pre>
