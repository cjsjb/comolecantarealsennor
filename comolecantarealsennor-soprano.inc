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

		\time 4/4
		\clef "treble"
		\key d \major

		R1*2  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
%% 5
		a' 8 a' 4 a' 8 g' 4 b'  |
		a' 2. r4  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
		a' 8 a' 4 a' 8 g' 4 g'  |
%% 10
		fis' 2. r4  |
		\key d \minor
		R1  |
		a' 8 a' a' a' a' 4 a'  |
		g' 8 g' 4 a' 2 r8  |
		bes' 8 bes' bes' bes' bes' 4 bes'  |
%% 15
		a' 8 a' a' a' a' 4 a'  |
		g' 8 g' g' g' a' 4 g'  |
		\key d \major
		a' 2. r4  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
%% 20
		a' 8 a' 4 a' 8 g' 4 b'  |
		a' 2. r4  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
		a' 8 a' 4 a' 8 g' 4 g'  |
%% 25
		fis' 2. r4  |
		\key d \minor
		R1  |
		a' 8 a' a' a' a' 4 a'  |
		g' 8 g' 4 a' 2 r8  |
		bes' 8 bes' bes' bes' bes' 4 bes'  |
%% 30
		a' 8 a' a' a' a' 4 a'  |
		g' 8 g' g' g' a' 4 g'  |
		\key d \major
		a' 2. r4  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
%% 35
		a' 8 a' 4 a' 8 g' 4 b'  |
		a' 2. r4  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
		a' 8 a' 4 a' 8 g' 4 g'  |
%% 40
		fis' 2. r4  |
		\key d \minor
		R1  |
		a' 8 a' a' a' a' 4 a'  |
		g' 8 g' 4 a' 2 r8  |
		bes' 8 bes' bes' bes' bes' 4 bes'  |
%% 45
		a' 8 a' a' a' a' 4 a'  |
		g' 8 g' g' g' a' 4 g'  |
		\key d \major
		a' 2. r4  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
%% 50
		a' 8 a' 4 a' 8 g' 4 b'  |
		a' 2. r4  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
		a' 8 a' 4 a' 8 g' 4 g'  |
%% 55
		fis' 2. r4  |
		\key d \minor
		R1  |
		a' 8 a' a' a' a' 4 a'  |
		g' 8 g' 4 a' 2 r8  |
		bes' 8 bes' bes' bes' bes' 4 bes'  |
%% 60
		a' 8 a' a' a' a' 4 a'  |
		g' 8 g' g' g' a' 4 g'  |
		\key d \major
		a' 2. r4  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
%% 65
		a' 8 a' 4 a' 8 g' 4 b'  |
		a' 2. r4  |
		a' 8 a' 4 a' 8 g' 4 fis'  |
		g' 4 fis' e' 2  |
		a' 8 a' 4 a' 8 g' 4 g'  |
%% 70
		fis' 2. r4  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		% Estribillo
		Có -- mo le can -- ta -- "ré al" Se -- ñor,
		có -- mo le can -- ta -- ré,
		có -- mo le can -- ta -- "ré al" Se -- ñor,
		"si hom" -- bre de ba -- rro soy.

		% Él está en los montes y en el mar...
		Él es -- "tá en" los mon -- tes "y en" el mar,
		Él lle -- "na el" si -- len -- cio
		de la no -- "che en" cal -- ma
		y ca -- mi -- "na en" la ciu -- dad.

		% Estribillo
		Có -- mo le can -- ta -- "ré al" Se -- ñor,
		có -- mo le can -- ta -- ré,
		có -- mo le can -- ta -- "ré al" Se -- ñor,
		"si hom" -- bre de ba -- rro soy.

		% no mira en los hombres su color...
		No mi -- "ra en" los hom -- bres su co -- lor,
		no mi -- "ra el" di -- ne -- ro,
		es Pa -- dre de to -- dos,
		"y a" to -- dos quie -- "re el" Se -- ñor.

		% Estribillo
		Có -- mo le can -- ta -- "ré al" Se -- ñor,
		có -- mo le can -- ta -- ré,
		có -- mo le can -- ta -- "ré al" Se -- ñor,
		"si hom" -- bre de ba -- rro soy.

		% vamos a su mesa de bondad...
		Va -- mos a su me -- sa de bon -- dad:
		Él nos a -- li -- men -- ta
		con su pro -- pio cuer -- po
		"que es" el pan de "la u" -- ni -- dad.

		% Estribillo
		Có -- mo le can -- ta -- "ré al" Se -- ñor,
		có -- mo le can -- ta -- ré,
		có -- mo le can -- ta -- "ré al" Se -- ñor,
		"si hom" -- bre de ba -- rro soy.

		% un mandato nuevo nos da dios...
		Un man -- da -- to nue -- vo nos da Dios:
		que to -- dos a -- me -- mos
		a nues -- tros her -- ma -- nos
		co -- mo nos a -- "ma el" Se -- ñor.

		% Estribillo
		Có -- mo le can -- ta -- "ré al" Se -- ñor,
		có -- mo le can -- ta -- ré,
		có -- mo le can -- ta -- "ré al" Se -- ñor,
		"si hom" -- bre de ba -- rro soy.
	}
>>
