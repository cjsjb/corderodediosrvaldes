\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		% intro
		R1*2  |

		% cordero de dios...
		e' 4 e' d' 8 d' 4 b 8 ~  |
		b 4 b d' 8 d' 4.  |
		e' 4 e' 8 d' 4 d' 8 d' 4  |
		b 8 b r4 r2  |

		% ten piedad de nosotros...
		c' 4 c' 8 c' 4 c' 8 c' 4  |
		b 1  |
		b 1  |

		% cordero de dios...
		e' 4 e' d' 8 d' 4 b 8 ~  |
		b 4 b d' 8 d' 4.  |
		e' 4 e' 8 d' 4 d' 8 d' 4  |
		b 8 b r4 r2  |

		% ten piedad de nosotros...
		c' 4 c' 8 c' 4 c' 8 c' 4  |
		b 1  |
		b 1  |

		% cordero de dios...
		e' 4 e' d' 8 d' 4 b 8 ~  |
		b 4 b d' 8 d' 4.  |
		e' 4 e' 8 d' 4 d' 8 d' 4  |
		b 8 b r4 r2  |

		% danos la paz...
		c' 2 a 4 a  |
		b 1  |
		c' 2 a 4 a  |
		b 1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzosoprano" {
		%\set ignoreMelismata = ##t
		"Cor" -- "de" -- "ro" "de" "Dios,"
		"que" "qui" -- "tas" "el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros."

		"Cor" -- "de" -- "ro" "de" "Dios,"
		"que" "qui" -- "tas" "el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros."

		"Cor" -- "de" -- "ro" "de" "Dios,"
		"que" "qui" -- "tas" "el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"da" -- "nos" "la" "paz,"
		"da" -- "nos" "la" "paz."
		%\unset ignoreMelismata
	}
>>
