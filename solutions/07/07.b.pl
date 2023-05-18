% sistema
% hechos %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% manuel, gripe
% enfermedad(gripe)
%d
enfermo_de(manuel, gripe).
%e
tiene_sintoma(alicia,cansancio).
%f que la fiebre es síntoma de la gripe
sintoma_de(fiebre, gripe).
%g. que la tos es síntoma de la gripe
sintoma_de(tos, gripe).
%h. que el cansancio es síntoma de la anemia
sintoma_de(cansancio, anemia).

%i. que las vitaminas eliminan el cansancio
elimina(vitaminas, cansancio).
%j. que las aspirinas eliminan la fiebre
elimina(aspirinas, fiebre).
%k. que el jarabe elimina la tos
elimina(jarabe, tos).

%reglas %%%%%%%%%%%%%%%%%%%%%%%%
%a. una enfermedad se caracteriza por un síntoma o más
enfermo_de(P, E) :- 
  tiene_sintoma(P,S),
  sintoma_de(S,E).

%b. una medicamento alivia una enfermedad
alivia(Medicamento, Enfermedad) :-
  sintoma_de(Sintoma,Enfermedad),
  elimina(Medicamento,Sintoma).

%c. una receta indica medicamentos para un paciente (enfermo).
recetar_a(Medicamento, Enfermo) :-
  alivia(Medicamento, Enfermedad),
  enfermo_de(Enfermo, Enfermedad).

%%% preguntas %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%l. Qué se le recetará a Manuel
% recetar_a(M, manuel).
%m. Qué se le recetará a Alicia
% recetar_a(M, manuel).
%n. De qué está enferma Alicia
% enfermo_de(alicia, Enfermedad).
%o. Qué alivia la anemia
% alivia(Medicamento, anemia).
% Medicamento = vitaminas.
%p. Qué alivia la gripe
% alivia(Medicamento, gripe).
% Medicamento = aspirinas ;
% Medicamento = jarabe.