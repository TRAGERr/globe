params["_object"];

{
    _object animate 
    [
        _x,
        random 1,
        true
    ]
}
forEach ["Drawer_1_move_source","Drawer_2_move_source","Drawer_3_move_source","Drawer_4_move_source","Drawer_5_move_source","Drawer_6_move_source"];

{
    _object animate 
    [
        _x,
        selectRandom [0,1],
        true
    ]
}
forEach ["Lid_1_hide_source","Lid_1_hide_source","Wing_L_Hide_Source","Wing_R_Hide_Source"];

true