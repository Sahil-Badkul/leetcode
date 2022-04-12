<h2><a href="https://leetcode.com/problems/game-of-life/">289. Game of Life</a></h2><h3>Medium</h3><hr><div><p>According to&nbsp;<a href="https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life" target="_blank" style="--link-color:rgb(149, 182, 156) !important; --link-color-hover:rgb(168, 195, 173) !important; --link-color-active:rgb(149, 182, 156) !important; --visited-color:rgb(246, 198, 85) !important; --visited-color-hover:rgb(248, 208, 114) !important; --visited-color-active:rgb(246, 198, 85) !important; border-top-color: rgb(106, 149, 119) !important; border-right-color: rgb(106, 149, 119) !important; border-left-color: rgb(106, 149, 119) !important;">Wikipedia's article</a>: "The <b>Game of Life</b>, also known simply as <b>Life</b>, is a cellular automaton devised by the British mathematician John Horton Conway in 1970."</p>

<p>The board is made up of an <code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">m x n</code> grid of cells, where each cell has an initial state: <b>live</b> (represented by a <code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">1</code>) or <b>dead</b> (represented by a <code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">0</code>). Each cell interacts with its <a href="https://en.wikipedia.org/wiki/Moore_neighborhood" target="_blank" style="--link-color:rgb(149, 182, 156) !important; --link-color-hover:rgb(168, 195, 173) !important; --link-color-active:rgb(149, 182, 156) !important; --visited-color:rgb(246, 198, 85) !important; --visited-color-hover:rgb(248, 208, 114) !important; --visited-color-active:rgb(246, 198, 85) !important; border-top-color: rgb(106, 149, 119) !important; border-right-color: rgb(106, 149, 119) !important; border-left-color: rgb(106, 149, 119) !important;">eight neighbors</a> (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):</p>

<ol>
	<li>Any live cell with fewer than two live neighbors dies as if caused by under-population.</li>
	<li>Any live cell with two or three live neighbors lives on to the next generation.</li>
	<li>Any live cell with more than three live neighbors dies, as if by over-population.</li>
	<li>Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.</li>
</ol>

<p><span>The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the <code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">m x n</code> grid <code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">board</code>, return <em style="color: rgb(200, 218, 210) !important;">the next state</em>.</span></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/26/grid1.jpg" style="width: 562px; height: 322px; filter: brightness(0.75); color: rgb(165, 192, 180) !important;">
<pre style="background-color: rgb(15, 20, 23) !important; color: rgb(157, 186, 173) !important;"><strong>Input:</strong> board = [[0,1,0],[0,0,1],[1,1,1],[0,0,0]]
<strong>Output:</strong> [[0,0,0],[1,0,1],[0,1,1],[0,1,0]]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/26/grid2.jpg" style="width: 402px; height: 162px; filter: brightness(0.75);">
<pre style="background-color: rgb(15, 20, 23) !important; color: rgb(157, 186, 173) !important;"><strong>Input:</strong> board = [[1,1],[1,0]]
<strong>Output:</strong> [[1,1],[1,1]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">m == board.length</code></li>
	<li><code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">n == board[i].length</code></li>
	<li><code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">1 &lt;= m, n &lt;= 25</code></li>
	<li><code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">board[i][j]</code> is <code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">0</code> or <code style="background-color: rgb(15, 20, 23) !important; color: rgb(158, 186, 173) !important;">1</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong></p>

<ul>
	<li>Could you solve it in-place? Remember that the board needs to be updated simultaneously: You cannot update some cells first and then use their updated values to update other cells.</li>
	<li>In this question, we represent the board using a 2D array. In principle, the board is infinite, which would cause problems when the active area encroaches upon the border of the array (i.e., live cells reach the border). How would you address these problems?</li>
</ul>
</div>