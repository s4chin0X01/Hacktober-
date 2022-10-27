<!DOCTYPE html>
<html>
	<head>
		<title>RAWRRRR!</title>
		<link rel="stylesheet" href="style.css"> 
	</head>
	<body>
		<!-- 
			Boilerplate to start the basic layout. 

			Making the canvas white will make our work space really obvious.
		-->
		<h1>Dinosaur Game!</h1>
		<canvas id="game" height="200" width="800"></canvas>
		<p class="controls">press space bar to start</p>

        <script src="js/helpers.js"></script>
        <script src="js/objects/game-object.js"></script>
        <script src="js/objects/cactus.js"></script>
        <script src="js/objects/dinosaur.js"></script>
        <script src="js/objects/background.js"></script>
        <script src="js/objects/score.js"></script>
        <script src="js/game.js"></script>
        <script>
        	new Game({
        		el: document.getElementById("game")
        	});
        </script>
	</body>
</html>
