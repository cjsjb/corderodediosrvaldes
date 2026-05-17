\context Staff = "violin" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "Vln."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "treble"

		\key e \minor
		R1*6  |
		c' 1  |
		d' 1  |
		dis' 1  |
%% 10
		e' 2 d' 4. e' 8 ~  |
		e' 2 d'  |
		c' 4. d' 8 ~ d' 2  |
		e' 4 r r2  |
		c' 1  |
%% 15
		d' 1  |
		dis' 1  |
		e' 2 d' 4. e' 8 ~  |
		e' 2 d'  |
		c' 4. d' 8 ~ d' 2  |
%% 20
		e' 4 r r2  |
		c' 2 d'  |
		e' 1  |
		c' 2 d'  |
		e' 1  |
%% 25
%		R1  |
		\bar "|."
	}
>>
