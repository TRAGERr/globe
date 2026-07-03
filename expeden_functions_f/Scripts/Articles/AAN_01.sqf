disableSerialization;

private _displayAAN1 = 
[
	[
		[
			"title",
			localize "STR_A3_Globe_article_aan1_title"
		],
		[
			"meta",	

			[
				localize "STR_A3_Globe_article_aan1_meta",
				[2034,5,16,14,42],
				localize "STR_A3_rscdisplayaanarticle_timezonecet"
			]
		],
		[
			"textbold",
			localize "STR_A3_Globe_article_aan1_textBold"
		],
		[
			"image",
			[
				"\A3\Missions_F_Bootcamp\Data\Img\Bootcamp_overview_CA.paa",
				localize "STR_A3_Globe_article_aan1_image1"
			]
		],
		[
			"box",
			[
				"\A3\UI_F_Globe\Data\Displays\RscDisplayAANArticle\MarkReynolds_CA.paa",
				localize "STR_A3_Globe_article_aan1_box1"
			]
		],	
		[
			"text",
			localize "STR_A3_Globe_article_aan1_text1"
		],
		[
			"text",
			localize "STR_A3_Globe_article_aan1_text2"
		],
		/*[
			"textlocked",
			localize "STR_A3_Orange_AAN_text_5",
			localize "str_a3_orange_aan_paywall"
		],*/
		[
			"author",
			[
				"\a3\ui_f\data\IGUI\RscTitles\AAN\AAN_logo_corner_ca.paa",
				localize "STR_A3_exp_m02_b01_tanoasituation_aan_1"
			]
		],
		[
			"draft"
		]
	],
	nil,
	true
]
call bis_fnc_showAANArticle;

playSound "Orange_Read_Article";