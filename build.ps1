$build1 = $args[0]
$build2 = $args[1]
$build3 = $args[2]
$build4 = $args[3]

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
}

if ($build1 -eq "main" -or $build2 -eq "main" -or $build3 -eq "main" -or $build4 -eq "main") {
    main.cpp
}
if ($build1 -eq "menu" -or $build2 -eq "menu" -or $build3 -eq "menu" -or $build4 -eq "menu") {
    menu.cpp
}
if ($build1 -eq "scene" -or $build2 -eq "scene" -or $build3 -eq "scene" -or $build4 -eq "scene"){
    scene.cpp
}
if ($build1 -eq "game" -or $build2 -eq "game" -or $build3 -eq "game" -or $build4 -eq "game"){
    game.cpp
}
if ($build1 -eq $null) {
    build   
}

link
run
