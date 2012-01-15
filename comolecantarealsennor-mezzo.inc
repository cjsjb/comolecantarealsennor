\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key d \major

		R1*2  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
%% 5
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 2. r4  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
		fis' 8 fis' 4 fis' 8 e' 4 e'  |
%% 10
		d' 2. r4  |
		\key d \minor
		R1  |
		f' 8 f' f' f' f' 4 f'  |
		e' 8 e' 4 f' 2 r8  |
		g' 8 g' g' g' g' 4 g'  |
%% 15
		f' 8 f' f' f' f' 4 f'  |
		e' 8 e' e' e' fis' 4 e'  |
		\key d \major
		fis' 2. r4  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
%% 20
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 2. r4  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
		fis' 8 fis' 4 fis' 8 e' 4 e'  |
%% 25
		d' 2. r4  |
		\key d \minor
		R1  |
		f' 8 f' f' f' f' 4 f'  |
		e' 8 e' 4 f' 2 r8  |
		g' 8 g' g' g' g' 4 g'  |
%% 30
		f' 8 f' f' f' f' 4 f'  |
		e' 8 e' e' e' fis' 4 e'  |
		\key d \major
		fis' 2. r4  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
%% 35
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 2. r4  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
		fis' 8 fis' 4 fis' 8 e' 4 e'  |
%% 40
		d' 2. r4  |
		\key d \minor
		R1  |
		f' 8 f' f' f' f' 4 f'  |
		e' 8 e' 4 f' 2 r8  |
		g' 8 g' g' g' g' 4 g'  |
%% 45
		f' 8 f' f' f' f' 4 f'  |
		e' 8 e' e' e' fis' 4 e'  |
		\key d \major
		fis' 2. r4  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
%% 50
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 2. r4  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
		fis' 8 fis' 4 fis' 8 e' 4 e'  |
%% 55
		d' 2. r4  |
		\key d \minor
		R1  |
		f' 8 f' f' f' f' 4 f'  |
		e' 8 e' 4 f' 2 r8  |
		g' 8 g' g' g' g' 4 g'  |
%% 60
		f' 8 f' f' f' f' 4 f'  |
		e' 8 e' e' e' fis' 4 e'  |
		\key d \major
		fis' 2. r4  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
%% 65
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 2. r4  |
		fis' 8 fis' 4 fis' 8 e' 4 d'  |
		e' 4 cis' a 2  |
		fis' 8 fis' 4 fis' 8 e' 4 e'  |
%% 70
		d' 2. r4  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
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
