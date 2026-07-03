params["_object"];

{
    _object animate 
    [
        _x,
        random 1,
        true
    ]
}
forEach ["Drawer_2_move_source","Drawer_3_move_source","Drawer_4_move_source","Drawer_5_move_source","Drawer_6_move_source"];

{
    _object animate 
    [
        _x,
        selectRandom [0,1],
        true
    ]
}
forEach ["Drawer_2_hide_source","Drawer_3_hide_source","Drawer_4_hide_source","Drawer_5_hide_source","Drawer_6_hide_source"];

true