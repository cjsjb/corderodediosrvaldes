\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	title = "Cordero de Dios"
	composer = "Romeo Alfonso Valdés Villarreal"
	tagline = "Coro Juvenil San Juan Bosco"
	copyright = "Copyright © 1970 Romeo Alfonso Valdés Villarreal"
	instrument = "Cello"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define fonts (set-global-fonts #:roman "Lato" #:sans "Lato"))
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
}
globalTempo = {
	\tempo 4 = 135
}
\score {
	\new StaffGroup <<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "corderorvaldes-acordes.inc"
		\include "corderorvaldes-soprano.inc"
		\include "corderorvaldes-cello.inc"
	>>

	\layout { }
}
