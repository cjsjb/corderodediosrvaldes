\context Staff = "cello" <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "Clo."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "bass"

		\key e \minor
		R1*6  |
		c 1  |
		g 1  |
		b 1  |
%% 10
		e 2 d 4. e 8 ~  |
		e 2 d  |
		c 4. d 8 ~ d 2  |
		e 4 r r2  |
		c 1  |
%% 15
		g 1  |
		b 1  |
		e 2 d 4. e 8 ~  |
		e 2 d  |
		c 4. d 8 ~ d 2  |
%% 20
		e 4 r r2  |
		c 2 d 4 fis  |
		e 1  |
		c 2 d 4 fis  |
		e 1  |
%% 25
		\bar "|."
	}
>>
