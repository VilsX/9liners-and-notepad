
class nln_nineliner_medevac_resource
{
	idd = -1;
	onUnload = "uiNamespace setVariable ['nln_nineliner_medv_resource', nil]; hint '';";
	duration = 1;
	fadein = 0;
	name = "nln_nineliner_medevac_resource";
	onLoad = "uiNamespace setVariable ['nln_nineliner_medv_resource', _this select 0];";
	
	class Controls
	{
		class nln_nineliner_medv_background : nln_nineliner_medv_picture
		{
			idc = 1200;
			text = "\nln_nineliner_and_notepad\data\nln_nineliner_medevac\images\nineliner_medevac.paa";
			x = "-0.0213542 * safezoneW + safezoneX";
			y = "0.247099 * safezoneH + safezoneY";
			w = "0.4125 * safezoneW";
			h = "0.747708 * safezoneH";
			moving = 1;
		};

		class nln_nineliner_medevac_edit_line1 : nln_nineliner_medv_edit
		{
			idc = 1400;
			x = "0.144792 * safezoneW + safezoneX";
			y = "0.34606 * safezoneH + safezoneY";
			w = "0.189062 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line2 : nln_nineliner_medv_edit
		{
			idc = 1401;
			x = "0.173438 * safezoneW + safezoneX";
			y = "0.390043 * safezoneH + safezoneY";
			w = "0.160417 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line3 : nln_nineliner_medv_edit
		{
			idc = 1402;
			x = "0.161979 * safezoneW + safezoneX";
			y = "0.434026 * safezoneH + safezoneY";
			w = "0.171875 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line4 : nln_nineliner_medv_edit
		{
			idc = 1403;
			x = "0.144792 * safezoneW + safezoneX";
			y = "0.489004 * safezoneH + safezoneY";
			w = "0.189062 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line5 : nln_nineliner_medv_edit
		{
			idc = 1404;
			x = "0.121875 * safezoneW + safezoneX";
			y = "0.554979 * safezoneH + safezoneY";
			w = "0.20625 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line6 : nln_nineliner_medv_edit
		{
			idc = 1405;
			x = "0.133333 * safezoneW + safezoneX";
			y = "0.620953 * safezoneH + safezoneY";
			w = "0.200521 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line7 : nln_nineliner_medv_edit
		{
			idc = 1406;
			x = "0.15625 * safezoneW + safezoneX";
			y = "0.719914 * safezoneH + safezoneY";
			w = "0.177604 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line8 : nln_nineliner_medv_edit
		{
			idc = 1407;
			x = "0.150521 * safezoneW + safezoneX";
			y = "0.785888 * safezoneH + safezoneY";
			w = "0.183333 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_medv_edit_1408 : nln_nineliner_medv_edit
		{
			idc = 1408;
			x = "0.127604 * safezoneW + safezoneX";
			y = "0.840867 * safezoneH + safezoneY";
			w = "0.200521 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line3_cross_picture1 : nln_nineliner_medv_picture_cross
		{
			idc = 2800;
			x = "0.0645833 * safezoneW + safezoneX";
			y = "0.456017 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line3_cross_picture2 : nln_nineliner_medv_picture_cross
		{
			idc = 2801;
			x = "0.104688 * safezoneW + safezoneX";
			y = "0.456017 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line3_cross_picture3 : nln_nineliner_medv_picture_cross
		{
			idc = 2802;
			x = "0.173438 * safezoneW + safezoneX";
			y = "0.456017 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line3_cross_picture4 : nln_nineliner_medv_picture_cross
		{
			idc = 2803;
			x = "0.219271 * safezoneW + safezoneX";
			y = "0.456017 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line3_cross_picture5 : nln_nineliner_medv_picture_cross
		{
			idc = 2804;
			x = "0.270833 * safezoneW + safezoneX";
			y = "0.456017 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line4_cross_picture1 : nln_nineliner_medv_picture_cross
		{
			idc = 2805;
			x = "0.0645833 * safezoneW + safezoneX";
			y = "0.510996 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line4_cross_picture2 : nln_nineliner_medv_picture_cross
		{
			idc = 2806;
			x = "0.121875 * safezoneW + safezoneX";
			y = "0.510996 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line4_cross_picture3 : nln_nineliner_medv_picture_cross
		{
			idc = 2807;
			x = "0.179167 * safezoneW + safezoneX";
			y = "0.510996 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line4_cross_picture4 : nln_nineliner_medv_picture_cross
		{
			idc = 2808;
			x = "0.276563 * safezoneW + safezoneX";
			y = "0.510996 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line5_cross_picture1 : nln_nineliner_medv_picture_cross
		{
			idc = 2809;
			x = "0.0645833 * safezoneW + safezoneX";
			y = "0.57697 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line5_cross_picture2 : nln_nineliner_medv_picture_cross
		{
			idc = 2810;
			x = "0.116146 * safezoneW + safezoneX";
			y = "0.57697 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line6_cross_picture1 : nln_nineliner_medv_picture_cross
		{
			idc = 2811;
			x = "0.0588542 * safezoneW + safezoneX";
			y = "0.65394 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line6_cross_picture2 : nln_nineliner_medv_picture_cross
		{
			idc = 2812;
			x = "0.110417 * safezoneW + safezoneX";
			y = "0.65394 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line6_cross_picture3 : nln_nineliner_medv_picture_cross
		{
			idc = 2813;
			x = "0.173438 * safezoneW + safezoneX";
			y = "0.65394 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line6_cross_picture4 : nln_nineliner_medv_picture_cross
		{
			idc = 2814;
			x = "0.247917 * safezoneW + safezoneX";
			y = "0.65394 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line7_cross_picture1 : nln_nineliner_medv_picture_cross
		{
			idc = 2815;
			x = "0.0645833 * safezoneW + safezoneX";
			y = "0.741906 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line7_cross_picture2 : nln_nineliner_medv_picture_cross
		{
			idc = 2816;
			x = "0.104688 * safezoneW + safezoneX";
			y = "0.741906 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line7_cross_picture3 : nln_nineliner_medv_picture_cross
		{
			idc = 2817;
			x = "0.179167 * safezoneW + safezoneX";
			y = "0.741906 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line7_cross_picture4 : nln_nineliner_medv_picture_cross
		{
			idc = 2818;
			x = "0.242188 * safezoneW + safezoneX";
			y = "0.741906 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line7_cross_picture5 : nln_nineliner_medv_picture_cross
		{
			idc = 2819;
			x = "0.29375 * safezoneW + safezoneX";
			y = "0.741906 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line8_cross_picture1 : nln_nineliner_medv_picture_cross
		{
			idc = 2820;
			x = "0.0645833 * safezoneW + safezoneX";
			y = "0.796884 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line8_cross_picture2 : nln_nineliner_medv_picture_cross
		{
			idc = 2821;
			x = "0.110417 * safezoneW + safezoneX";
			y = "0.796884 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line8_cross_picture3 : nln_nineliner_medv_picture_cross
		{
			idc = 2822;
			x = "0.161979 * safezoneW + safezoneX";
			y = "0.796884 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line8_cross_picture4 : nln_nineliner_medv_picture_cross
		{
			idc = 2823;
			x = "0.225 * safezoneW + safezoneX";
			y = "0.796884 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line8_cross_picture5 : nln_nineliner_medv_picture_cross
		{
			idc = 2824;
			x = "0.29375 * safezoneW + safezoneX";
			y = "0.796884 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line9_cross_picture1 : nln_nineliner_medv_picture_cross
		{
			idc = 2825;
			x = "0.0645833 * safezoneW + safezoneX";
			y = "0.88485 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line9_cross_picture2 : nln_nineliner_medv_picture_cross
		{
			idc = 2826;
			x = "0.110417 * safezoneW + safezoneX";
			y = "0.88485 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};

		class nln_nineliner_medevac_edit_line9_cross_picture3 : nln_nineliner_medv_picture_cross
		{
			idc = 2827;
			x = "0.161979 * safezoneW + safezoneX";
			y = "0.88485 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0329871 * safezoneH";
		};
	};
};