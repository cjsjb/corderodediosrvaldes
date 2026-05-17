\context Staff = "viola" <<
	\set Staff.instrumentName = "Viola"
	\set Staff.shortInstrumentName = "Vla."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "alto"

		\key e \minor
		R1*6  |
		c' 1  |
		g 1  |
		b 1  |
%% 10
		e' 2 d' 4. e' 8 ~  |
		e' 2 d'  |
		c' 4. a 8 ~ a 2  |
		b 4 r r2  |
		c' 1  |
%% 15
		g 1  |
		b 1  |
		e' 2 d' 4. e' 8 ~  |
		e' 2 d'  |
		c' 4. a 8 ~ a 2  |
%% 20
		b 4 r r2  |
		c' 2 d'  |
		b 1  |
		c' 2 d'  |
		b 1  |
%% 25
%		R1  |
		\bar "|."
	}
>>
