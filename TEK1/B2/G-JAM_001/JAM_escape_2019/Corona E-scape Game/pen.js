
var template = [
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 
    1, 0, 0, 0, 0, 3, 0, 1, 0, 1, 0, 1, 1, 1, 1,
    1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1,
    1, 0, 1, 1, 3, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 
    1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1,
    1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1,
    1, 3, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1,
    1, 0, 1, 3, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1,
    1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 2, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
  ];
  
  var canvas = document.getElementById("canvas");
  var ctx = canvas.getContext("2d");
  
  var cat = new Image();
  cat.src = "https://koenig-media.raywenderlich.com/uploads/2012/06/PixelArtTutorial.png";
  
  var tuna = new Image();
  tuna.src = "https://png.pngtree.com/png-clipart/20190921/original/pngtree-classical-wood-door-png-image_4766697.jpg";
  
  var corona = new Image();
  corona.src = "https://thumbs.dreamstime.com/b/hand-drawn-coronavirus-virus-cartoon-doodle-illustration-coronavirus-virus-cartoon-doodle-illustration-170845946.jpg";

  var wall = new Image();
  wall.src = "https://comps.canstockphoto.com/dark-red-brick-wall-background-stock-photography_csp6179240.jpg";
  
  var maze = [];
  
  var player = new Object({
    x: 0,
    y: 1,
    loc: 15,
    moves: 0
  });
  
  var x = 0, y = 0, second = 60, count = 0;

  for (var i = 0; i < 15 * 15; i++) {
    maze.push({
      "x": x,
      "y": y,
      "state": template[i]
    });
    if (x == 14) {
      y++;
      x = 0;
    } else {
      x++;
    }
  }
  
  function keyPress(e) {
    switch (e.keyCode) {
      case 39: //Right
        if (player.x != 14) {
          player.loc ++;
          if (maze[player.loc].state != 1) {
            if (maze[player.loc].state == 3)
              count++;
            ctx.clearRect(player.x * 32, player.y * 32, 32, 32);
            player.x++;
            player.moves++;
            second--;
          }
          else {player.loc--;}
        }
        break;
      case 37: //left
        if (player.x != 0) {
          player.loc--;
          if (maze[player.loc].state != 1) {
            if (maze[player.loc].state == 3)
              count++;
            ctx.clearRect(player.x * 32, player.y * 32, 32, 32);
            player.x--;
            player.moves ++;
            second--;
          }
          else {player.loc++;}
        }
        break;
      case 40: //Down
        if (player.y != 14) {
          player.loc += 15;
          if (maze[player.loc].state != 1) {
            if (maze[player.loc].state == 3)
              count++;
            ctx.clearRect(player.x * 32, player.y * 32, 32, 32);
            player.y++;
            player.moves ++;
            second--;
          }
          else {player.loc -= 15;}
        }
        break;
      case 38: //Up
        if (player.y != 0) {
          player.loc -= 15;
          if (maze[player.loc].state != 1) {
            if (maze[player.loc].state == 3)
              count++;
            ctx.clearRect(player.x * 32, player.y * 32, 32, 32);
            player.y --;
            player.moves ++;
            second--;
          }
          else {player.loc += 15;}
        }
        break;
    }
  ctx.drawImage(cat, player.x * 32, player.y * 32, 32, 32);
    if (maze[player.loc].state == 2) {
      if (count == 5) {
         alert("You are safe!!!");
         location.reload();
      } else
          alert("Kill all corona babies!!!");
    }
    document.getElementById("moves").innerHTML = "Moves: " + player.moves;
    document.getElementById("rebours").innerHTML = "Compte à rebours: " + second;
    if((second) == 0 && maze[player.loc].state != 2) { 
        alert("You loose!!!");
  }
  }

  function start(){
    player.x = 0;
    player.y = 1;
    count = 0;
    second = 60;
    player.loc = 15;
  for (var i = 0; i < 15 * 15; i++) {
    ctx.clearRect(maze[i].x * 32, maze[i].y * 32, 32, 32);
    if (maze[i].state == 1 || maze[i].state == "1") {
      ctx.drawImage(wall, maze[i].x * 32, maze[i].y * 32, 32, 32);
    }
    if (maze[i].state == 2 || maze[i].state == "2") {
      ctx.drawImage(tuna, maze[i].x * 32, maze[i].y * 32, 32, 32);
    }
    if (maze[i].state == 3 || maze[i].state == "3") {
      ctx.drawImage(corona, maze[i].x * 32, maze[i].y * 32, 32, 32);
    }
    ctx.drawImage(cat, player.x * 32, player.y * 32, 32, 32);
    window.addEventListener("keydown", keyPress, true);
  }
  }
