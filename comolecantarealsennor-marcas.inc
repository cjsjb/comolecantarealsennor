\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 1*2

	% Como le cantare al Sennor...
	\mark \default
	\skip 1*4
	\skip 1*5

	% El esta en los montes y en el mar...
	\mark \default
	\skip 1*6

	% Como le cantare al Sennor...
	\mark \default
	\skip 1*4
	\skip 1*5

	% No mira en los hombres su color...
	\mark \default
	\skip 1*6

	% Como le cantare al Sennor...
	\mark \default
	\skip 1*4
	\skip 1*5

	% Vamos a su mesa de bonda...
	\mark \default
	\skip 1*6

	% Como le cantare al Sennor...
	\mark \default
	\skip 1*4
	\skip 1*5

	% Un mandato nuevo nos da Dios...
	\mark \default
	\skip 1*6

	% Como le cantare al Sennor...
	\mark \default
	\skip 1*4
	%\skip 1*5
}
