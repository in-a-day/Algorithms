<div><p>The&nbsp;<b>Fibonacci numbers</b>, <wdautohl-customtag style="font-weight:bold;color:red;font-size:inherit;display:inline;" id="wdautohl_id_3" class="wdautohl_Y29tbW9ubHk_">commonly</wdautohl-customtag> <wdautohl-customtag style="font-weight:bold;color:red;font-size:inherit;display:inline;" id="wdautohl_id_4" class="wdautohl_ZGVub3Rl">denoted</wdautohl-customtag>&nbsp;<code>F(n)</code>&nbsp;form a <wdautohl-customtag style="font-weight:bold;color:red;font-size:inherit;display:inline;" id="wdautohl_id_5" class="wdautohl_c2VxdWVuY2U_">sequence</wdautohl-customtag>, called the&nbsp;<b>Fibonacci <wdautohl-customtag style="font-weight:bold;color:red;font-size:inherit;display:inline;" id="wdautohl_id_6" class="wdautohl_c2VxdWVuY2U_">sequence</wdautohl-customtag></b>, such that each number is the <wdautohl-customtag style="font-weight:bold;color:red;font-size:inherit;display:inline;" id="wdautohl_id_7" class="wdautohl_c3Vt">sum</wdautohl-customtag> of the two <wdautohl-customtag style="font-weight:bold;color:red;font-size:inherit;display:inline;" id="wdautohl_id_8" class="wdautohl_cHJlY2VkZQ__">preceding</wdautohl-customtag> ones, starting from <code>0</code> and <code>1</code>. That is,</p>

<pre>F(0) = 0,&nbsp; &nbsp;F(1)&nbsp;= 1
F(N) = F(N - 1) + F(N - 2), for N &gt; 1.
</pre>

<p>Given <code>N</code>, <wdautohl-customtag style="font-weight:bold;color:red;font-size:inherit;display:inline;" id="wdautohl_id_9" class="wdautohl_Y2FsY3VsYXRl">calculate</wdautohl-customtag> <code>F(N)</code>.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 2
<strong>Output:</strong> 1
<strong>Explanation:</strong> F(2) = F(1) + F(0) = 1 + 0 = 1.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> 3
<strong>Output:</strong> 2
<strong>Explanation:</strong> F(3) = F(2) + F(1) = 1 + 1 = 2.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> 4
<strong>Output:</strong> 3
<strong>Explanation:</strong> F(4) = F(3) + F(2) = 2 + 1 = 3.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<p>0 ≤ <code>N</code> ≤ 30.</p>
</div>