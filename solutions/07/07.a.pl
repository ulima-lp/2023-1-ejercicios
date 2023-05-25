%1
iguales(X, X).
%2
igualesString(X, X).
%3
mismaLongitud(String1, String2) :-
    string_length(String1, Length1),
    string_length(String2, Length2),
    Length1 =:= Length2.
%4
suma(X, Y, Z) :- Z is X + Y.
%5
resta(X, Y, Z) :- Z is X - Y.
%6
multiplica(X, Y, Z) :- Z is X * Y.
%7
divide(X, Y, Z) :- Z is X / Y.
%8
par(X) :- 0 is X mod 2.
%9
impar(N) :- N mod 2 =\= 0.
%10
multiplo3(N) :- N mod 3 =:= 0.
%11
areaTriangulo(Base, Altura, Area) :- Area is (Base * Altura) / 2.
%12
areaCuadrado(Lado, Area) :- Area is (Lado*Lado).
%13
celsiusToFahrenheit(C, F) :- F is (C * 9/5) + 32.
%14
fahrenheitToCelcius(F, C) :- C is (F - 32) * 5 / 9.