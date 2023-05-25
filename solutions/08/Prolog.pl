% 2. %
% Definición de las reglas del juego
gana(piedra, tijeras).
gana(papel, piedra).
gana(tijeras, papel).

% Predicado para determinar el ganador
ganador(EleccionJugador1, EleccionJugador2, Ganador) :-
    gana(EleccionJugador1, EleccionJugador2),
    Ganador = jugador1.

ganador(EleccionJugador1, EleccionJugador2, Ganador) :-
    gana(EleccionJugador2, EleccionJugador1),
    Ganador = jugador2.

ganador(EleccionJugador1, EleccionJugador2, Ganador) :-
    EleccionJugador1 = EleccionJugador2,
    Ganador = empate.

% 3. %
% Definición de las reglas del juego
gana(piedra, tijeras).
gana(piedra, lagarto).
gana(papel, piedra).
gana(papel, Spock).
gana(tijeras, papel).
gana(tijeras, lagarto).
gana(lagarto, papel).
gana(lagarto, Spock).
gana(spock, piedra).
gana(spock, tijeras).

% Predicado para determinar el ganador
ganador(EleccionJugador1, EleccionJugador2, Ganador) :-
    gana(EleccionJugador1, EleccionJugador2),
    Ganador = jugador1.

ganador(EleccionJugador1, EleccionJugador2, Ganador) :-
    gana(EleccionJugador2, EleccionJugador1),
    Ganador = jugador2.

ganador(EleccionJugador1, EleccionJugador2, Ganador) :-
    EleccionJugador1 = EleccionJugador2,
    Ganador = empate.
