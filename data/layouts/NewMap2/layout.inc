NewMap2_MapBorder::
	.incbin "data/layouts/NewMap2/border.bin"

NewMap2_MapBlockdata::
	.incbin "data/layouts/NewMap2/map.bin"

	.align 2
NewMap2_Layout::
	.4byte 12
	.4byte 10
	.4byte NewMap2_MapBorder
	.4byte NewMap2_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

