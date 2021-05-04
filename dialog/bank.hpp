/*
Dialog edited by Brizi Jaeger 
Picture MatzeDesign
*/




class Life_atm_management {
    idd = 2700;
    name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;




    class controlsBackground {
        class Life_RscTitleBackground: Life_RscPicture {
            text = "textures\imenus\Banking English.jpg";
            idc = -1;
			x = 0.276037 * safezoneW + safezoneX;
			y = 0.0409789 * safezoneH + safezoneY;
			w = 0.431928 * safezoneW;
			h = 0.918042 * safezoneH;
        };
    };




    class controls {
        class CashTitle: Life_RscStructuredText {
            idc = 2701;
            text = "";
			x = 0.452013 * safezoneW + safezoneX;
			y = 0.190585 * safezoneH + safezoneY;
			w = 0.151975 * safezoneW;
			h = 0.153007 * safezoneH;
        };




        /*class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "$STR_ATM_Title";
            x = 0.35;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };*/ // wird nicht benötigt wenn du es selber einbauen willst viel spass ^^ 




        class WithdrawButton: Life_RscButtonMenu {
            idc = -1;
            text = "";
            tooltip = "선택한 금액을 인출하려면 여기를 클릭하십시오!";
            onButtonClick = "[] call life_fnc_bankWithdraw";
			x = 0.38482 * safezoneW + safezoneX;
			y = 0.523801 * safezoneH + safezoneY;
			w = 0.0847862 * safezoneW;
			h = 0.0476019 * safezoneH;
            colorBackground[] = {-1,-1,-1,-1};
            colorBackgroundFocused[] = {1,1,1,0.12};
            colorBackground2[] = {0.75,0.75,0.75,0.2};
            color[] = {1,1,1,1};
            colorFocused[] = {0,0,0,0};
            color2[] = {0,0,0,0};
            colorText[] = {1,1,1,1};
            colorDisabled[] = {1,0,0,0.1};
        };




        class DepositButton: Life_RscButtonMenu {
            idc = -1;
            text = "";
            tooltip = "선택한 금액을 입금하려면 여기를 클릭하십시오!";
            onButtonClick = "[] call life_fnc_bankDeposit";
			x = 0.514397 * safezoneW + safezoneX;
			y = 0.523801 * safezoneH + safezoneY;
			w = 0.0847862 * safezoneW;
			h = 0.0476019 * safezoneH;
            colorBackground[] = {-1,-1,-1,-1};
            colorBackgroundFocused[] = {1,1,1,0.12};
            colorBackground2[] = {0.75,0.75,0.75,0.2};
            color[] = {1,1,1,1};
            colorFocused[] = {0,0,0,0};
            color2[] = {0,0,0,0};
            colorText[] = {1,1,1,1};
            colorDisabled[] = {1,0,0,0.1};
        };
        class moneyEdit: Life_RscEdit {
            idc = 2702;
            text = "100";
            sizeEx = 0.030;
			x = 0.38162 * safezoneW + safezoneX;
			y = 0.363994 * safezoneH + safezoneY;
			w = 0.220763 * safezoneW;
			h = 0.0612029 * safezoneH;
        };




        class PlayerList: Life_RscCombo {
            idc = 2703;
			x = 0.38002 * safezoneW + safezoneX;
			y = 0.442198 * safezoneH + safezoneY;
			w = 0.223963 * safezoneW;
			h = 0.040802 * safezoneH;
        };




        class TransferButton: Life_RscButtonMenu {
            idc = -1;
            text = "";
            tooltip = "선택한 금액을 이체하려면 여기를 클릭하십시오!";
            onButtonClick = "[] call life_fnc_bankTransfer";
			x = 0.384808 * safezoneW + safezoneX;
			y = 0.591805 * safezoneH + safezoneY;
			w = 0.214383 * safezoneW;
			h = 0.0476019 * safezoneH;
            colorBackground[] = {-1,-1,-1,-1};
            colorBackgroundFocused[] = {1,1,1,0.12};
            colorBackground2[] = {0.75,0.75,0.75,0.2};
            color[] = {1,1,1,1};
            colorFocused[] = {0,0,0,0};
            color2[] = {0,0,0,0};
            colorText[] = {1,1,1,1};
            colorDisabled[] = {1,0,0,0.1};
        };




        class GangWithdraw : TransferButton {
            idc = 2705;
            text = "";
            tooltip = "계좌에서 선택한 금액을 인출 하시겠습니까?";
            onButtonClick = "[] call life_fnc_gangWithdraw";
			x = 0.384818 * safezoneW + safezoneX;
			y = 0.792413 * safezoneH + safezoneY;
			w = 0.0847862 * safezoneW;
			h = 0.0476019 * safezoneH;
            colorBackground[] = {-1,-1,-1,-1};
            colorBackgroundFocused[] = {1,1,1,0.12};
            colorBackground2[] = {0.75,0.75,0.75,0.2};
            color[] = {1,1,1,1};
            colorFocused[] = {0,0,0,0};
            color2[] = {0,0,0,0};
            colorText[] = {1,1,1,1};
            colorDisabled[] = {1,0,0,0.1};
        };




        class GangDeposit : TransferButton {
            idc = 2706;
            text = "";
            tooltip = "계좌에서 선택한 금액으로 결제 하시겠습니까?";
            onButtonClick = "[] call life_fnc_gangDeposit";
			x = 0.515997 * safezoneW + safezoneX;
			y = 0.792413 * safezoneH + safezoneY;
			w = 0.0847862 * safezoneW;
			h = 0.0476019 * safezoneH;
            colorBackground[] = {-1,-1,-1,-1};
            colorBackgroundFocused[] = {1,1,1,0.12};
            colorBackground2[] = {0.75,0.75,0.75,0.2};
            color[] = {1,1,1,1};
            colorFocused[] = {0,0,0,0};
            color2[] = {0,0,0,0};
            colorText[] = {1,1,1,1};
            colorDisabled[] = {1,0,0,0.1};
        };




        /*class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "Schliessen";
            onButtonClick = "closeDialog 0;";
			x = 0.276058 * safezoneW + safezoneX;
			y = 0.962393 * safezoneH + safezoneY;
			w = 0.0991833 * safezoneW;
			h = 0.0340011 * safezoneH;
        };*/
    };
};