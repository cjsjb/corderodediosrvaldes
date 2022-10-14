\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		% intro
		R1*2  |

		% cordero de dios...
		e' 4 e' d' 8 d' 4 e' 8 ~  |
		e' 4 e' fis' 8 g' 4.  |
		a' 4 g' 8 fis' 4 e' 8 d' 4  |
		e' 8 e' r4 r2  |

		% ten piedad de nosotros...
		e' 4 e' 8 e' 4 e' 8 e' 4  |
		d' 1  |
		dis' 1  |

		% cordero de dios...
		e' 4 e' d' 8 d' 4 e' 8 ~  |
		e' 4 e' fis' 8 g' 4.  |
		a' 4 g' 8 fis' 4 e' 8 d' 4  |
		e' 8 e' r4 r2  |

		% ten piedad de nosotros...
		e' 4 e' 8 e' 4 e' 8 e' 4  |
		d' 1  |
		dis' 1  |

		% cordero de dios...
		e' 4 e' d' 8 d' 4 e' 8 ~  |
		e' 4 e' fis' 8 g' 4.  |
		a' 4 g' 8 fis' 4 e' 8 d' 4  |
		e' 8 e' r4 r2  |

		% danos la paz...
		e' 2 d' 4 fis'  |
		e' 1  |
		e' 2 d' 4 fis'  |
		gis' 1  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-soprano" {
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
	} % Lyrics 1
>> % Staff ends
