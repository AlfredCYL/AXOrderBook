#include "dbg_info.hpp"
#include "dbg_util.hpp"
#include "axob_mu_top.h"

#include "sbe_intf.hpp"
#include "sbe_ssz_origin.hpp"
#include "dbg_info.hpp"
int main()
{

	/* register-from-host */
	unsigned int    reg_securityID_idx_i;        //index of securityID
	/* register-to-host */
	//---- upstream ----
	unsigned int    reg_order_nb_o;               //nb of order
	unsigned int    reg_exec_nb_o;                //nb of exec
	unsigned int    reg_snap_nb_o;                //nb of snap
	unsigned int    reg_unknown_nb_o;             //nb of unknown frame
	unsigned int    reg_frame_bytes_cnt_o;        //nb of bytes of all sbe frames
	unsigned int    reg_frame_head_o;             //begin word of last read frame
	unsigned int    reg_frame_type_o;             //message type of last read frame
	unsigned int    reg_frame_tail_o;             //end word of last read frame
	//---- stats of MU ----
	unsigned int    reg_ChannelNo_o;              //end word of last read frame
	unsigned int    reg_TPM_o;                    //end word of last read frame
	//---- stats of securityID ----
	unsigned int    reg_securityID_nb_o;          //nb of managed SecurityIDs
	unsigned int    reg_sID_var_o;                //variable of [index of securityID]
	unsigned int    reg_sID_order_nb_o;           //nb of order of [index of securityID]
	unsigned int    reg_sID_exec_nb_o;            //nb of exec of [index of securityID]
	unsigned int    reg_sID_snap_nb_o;            //nb of snap of [index of securityID]
	unsigned int    reg_sID_snapGen_nb_o;         //nb of generated snap of [index of securityID]
	/* memory */
	/* stream */
	//---- data-from-upstream ----
	signal_stream_t    signal_stream_i;          //Stream from XV: signal
	sbe_stream::stream_t    sbe_stream_i;        //Stream from XV: sbe
	//---- data-to-downstream ----
	signal_stream_t    signal_stream_o;          //Stream to XV: signal
	sbe_stream::stream_t    sbe_stream_o;        //Stream to XV: snap-gen
axob_mu_top(
	/* register-from-host */
	reg_securityID_idx_i,        //index of securityID
	/* register-to-host */
	//---- upstream ----
	reg_order_nb_o,               //nb of order
	reg_exec_nb_o,                //nb of exec
	reg_snap_nb_o,                //nb of snap
	reg_unknown_nb_o,             //nb of unknown frame
	reg_frame_bytes_cnt_o,        //nb of bytes of all sbe frames
	reg_frame_head_o,             //begin word of last read frame
	reg_frame_type_o,             //message type of last read frame
	reg_frame_tail_o,             //end word of last read frame
	//---- stats of MU ----
	reg_ChannelNo_o,              //end word of last read frame
	reg_TPM_o,                    //end word of last read frame
	//---- stats of securityID ----
	reg_securityID_nb_o,          //nb of managed SecurityIDs
	reg_sID_var_o,                //variable of [index of securityID]
	reg_sID_order_nb_o,           //nb of order of [index of securityID]
	reg_sID_exec_nb_o,            //nb of exec of [index of securityID]
	reg_sID_snap_nb_o,            //nb of snap of [index of securityID]
	reg_sID_snapGen_nb_o,         //nb of generated snap of [index of securityID]
	/* memory */
	/* stream */
	//---- data-from-upstream ----
	signal_stream_i,        //Stream from XV: signal
	sbe_stream_i,           //Stream from XV: sbe
	//---- data-to-downstream ----
	signal_stream_o,        //Stream to XV: signal
	sbe_stream_o            //Stream to XV: snap-gen
);
}