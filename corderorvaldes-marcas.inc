\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 1*2

	% Cordero de Dios... ten piedad...
	\mark \default
	\skip 1*4
	\skip 1*3

	% Cordero de Dios... ten piedad...
	\mark \default
	\skip 1*4
	\skip 1*3

	% Cordero de Dios... danos la paz...
	\mark \default
	\skip 1*4
	%\skip 1*4
}
