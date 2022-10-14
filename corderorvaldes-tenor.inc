\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key e \minor

		% intro
		R1*2  |

		% cordero de dios...
		g 4 g fis 8 fis 4 g 8 ~  |
		g 4 g fis 8 fis 4.  |
		g 4 g 8 fis 4 fis 8 fis 4  |
		g 8 g r4 r2  |

		% ten piedad de nosotros...
		g 4 g 8 g 4 g 8 g 4  |
		g 1  |
		fis 1  |

		% cordero de dios...
		g 4 g fis 8 fis 4 g 8 ~  |
		g 4 g fis 8 fis 4.  |
		g 4 g 8 fis 4 fis 8 fis 4  |
		g 8 g r4 r2  |

		% ten piedad de nosotros...
		g 4 g 8 g 4 g 8 g 4  |
		g 1  |
		fis 1  |

		% cordero de dios...
		g 4 g fis 8 fis 4 g 8 ~  |
		g 4 g fis 8 fis 4.  |
		g 4 g 8 fis 4 fis 8 fis 4  |
		g 8 g r4 r2  |

		% danos la paz...
		g 2 fis 4 fis  |
		g 1  |
		g 2 fis 4 fis  |
		gis 1  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-tenor" {
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
