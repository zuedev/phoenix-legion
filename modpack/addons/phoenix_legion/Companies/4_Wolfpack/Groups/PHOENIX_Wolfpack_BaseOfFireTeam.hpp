class cfgGroups {
	class West {
		class BLU_PHOENIX {
			name = "Phoenix Legion";

			class BLU_PHOENIX_4_Wolfpack {
				name = "4th Company, Wolfpack (Motorized)";

				class PHOENIX_Wolfpack_BaseOfFireTeam {
					faction = "BLU_PHOENIX";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Wolfpack Base of Fire Team";
					side = 1;

					class unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "PHOENIX_Wolfpack_Rifleman";
					};
					class unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "PHOENIX_Wolfpack_Rifleman";
					};
					class unit2
					{
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "PHOENIX_Wolfpack_Rifleman";
					};
					class unit3
					{
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "PHOENIX_Wolfpack_Rifleman";
					};
				};
			};
		};
	};
};