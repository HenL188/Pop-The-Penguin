$build = $args[0]

function main.cpp {
    if (Test-Path -Path "main.o"){
        del main.o   
    }
    g++ -c main.cpp
}

function menu.cpp {
    if (Test-Path -Path "menu.o"){
        del menu.o   
    }
    g++ -c menu.cpp
}

function scene.cpp {
    if (Test-Path -Path "scene.o"){
        del scene.o   
    }
    g++ -c scene.cpp
}


function game.cpp {
    if (Test-Path -Path "game.o"){
        del game.o   
    }
    g++ -c game.cpp
}


function link {
    g++ *.o -o game -L./raylib/lib -l:libraylib.a -lopengl32 -lgdi32 -lwinmm
}

function run {
    try{
        ./game.exe
    }catch {
        Write-Host "Compilation error"
    }
}

function build {
    main.cpp
    menu.cpp
    scene.cpp
    game.cpp
    link
    run
}

if ($build -eq "main") {
    main.cpp
    link
    run
}
elseif ($build -eq "menu") {
    menu.cpp
    link
    run
}
elseif ($build -eq "scene"){
    scene.cpp
    link
    run
}
else {
 build   
}
