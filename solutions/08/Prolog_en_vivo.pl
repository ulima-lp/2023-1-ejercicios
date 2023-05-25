% Hechos que definen las reglas del juego
gana(piedra, tijera).
gana(piedra, lagarto).
gana(papel, piedra).
gana(papel, spock).
gana(tijera, papel).
gana(tijera, lagarto).
gana(lagarto, papel).
gana(lagarto, spock).
gana(spock, tijeras).
gana(spock, piedra).

% Regla principal para determinar al ganador
ganador(Jugador1, Jugador2) :-
    gana(Jugador1, Jugador2),
    write('¡Jugador 1 gana!').
ganador(Jugador1, Jugador2) :-
    gana(Jugador2, Jugador1),
    write('¡Jugador 2 gana!').
ganador(Jugador1, Jugador2) :-
    Jugador1 = Jugador2,
    write('¡Empate!').

% Predicado para jugar el juego
jugar_piedra_papel_tijera_lagarto_spock :-
    write('Jugador 1: Elige piedra, papel, tijera, lagarto, spock: '),
    read(Jugador1),
    write('Jugador 2: Elige piedra, papel, tijera, lagarto, spock: '),
    read(Jugador2),
    ganador(Jugador1, Jugador2).
