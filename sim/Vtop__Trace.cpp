// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__openmips0__DOT__id_aluop_o),8);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__openmips0__DOT__id_alusel_o),3);
            tracep->chgIData(oldp+2,(vlSelf->top__DOT__openmips0__DOT__id_reg1_o),32);
            tracep->chgIData(oldp+3,(vlSelf->top__DOT__openmips0__DOT__id_reg2_o),32);
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__openmips0__DOT__id_wreg_o));
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__openmips0__DOT__id_wd_o),5);
            tracep->chgIData(oldp+6,(vlSelf->top__DOT__openmips0__DOT__ex_wdata_o),32);
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__openmips0__DOT__mem_wreg_o));
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__openmips0__DOT__mem_wd_o),5);
            tracep->chgIData(oldp+9,(vlSelf->top__DOT__openmips0__DOT__mem_wdata_o),32);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__openmips0__DOT__reg1_read));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__openmips0__DOT__reg2_read));
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__openmips0__DOT__reg1_addr),5);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__openmips0__DOT__reg2_addr),5);
            tracep->chgIData(oldp+14,(vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm),32);
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__whilo_o));
            tracep->chgIData(oldp+17,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hi_o),32);
            tracep->chgIData(oldp+18,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__lo_o),32);
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout),32);
            tracep->chgIData(oldp+20,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres),32);
            tracep->chgIData(oldp+21,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres),32);
            tracep->chgIData(oldp+22,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI),32);
            tracep->chgIData(oldp+23,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO),32);
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__openmips0__DOT__mem0__DOT__whilo_o));
            tracep->chgIData(oldp+25,(vlSelf->top__DOT__openmips0__DOT__mem0__DOT__hi_o),32);
            tracep->chgIData(oldp+26,(vlSelf->top__DOT__openmips0__DOT__mem0__DOT__lo_o),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+27,(vlSelf->top__DOT__openmips0__DOT__pc),32);
            tracep->chgIData(oldp+28,(((IData)(vlSelf->top__DOT__rom_ce)
                                        ? ((0x1fffeU 
                                            >= (0x1ffffU 
                                                & (vlSelf->top__DOT__openmips0__DOT__pc 
                                                   >> 2U)))
                                            ? vlSelf->top__DOT__inst_rom0__DOT__inst_mem
                                           [(0x1ffffU 
                                             & (vlSelf->top__DOT__openmips0__DOT__pc 
                                                >> 2U))]
                                            : 0U) : 0U)),32);
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__rom_ce));
            tracep->chgIData(oldp+30,(vlSelf->top__DOT__openmips0__DOT__id_pc_i),32);
            tracep->chgIData(oldp+31,(vlSelf->top__DOT__openmips0__DOT__id_inst_i),32);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i),8);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i),3);
            tracep->chgIData(oldp+34,(vlSelf->top__DOT__openmips0__DOT__ex_reg1_i),32);
            tracep->chgIData(oldp+35,(vlSelf->top__DOT__openmips0__DOT__ex_reg2_i),32);
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__openmips0__DOT__ex_wreg_i));
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__openmips0__DOT__ex_wd_i),5);
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__openmips0__DOT__mem_wreg_i));
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__openmips0__DOT__mem_wd_i),5);
            tracep->chgIData(oldp+40,(vlSelf->top__DOT__openmips0__DOT__mem_wdata_i),32);
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__openmips0__DOT__wb_wreg_i));
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__openmips0__DOT__wb_wd_i),5);
            tracep->chgIData(oldp+43,(vlSelf->top__DOT__openmips0__DOT__wb_wdata_i),32);
            tracep->chgCData(oldp+44,((vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                       >> 0x1aU)),6);
            tracep->chgCData(oldp+45,((0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                >> 6U))),5);
            tracep->chgCData(oldp+46,((0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i)),6);
            tracep->chgCData(oldp+47,((0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x10U))),5);
            tracep->chgIData(oldp+48,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[0]),32);
            tracep->chgIData(oldp+49,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[1]),32);
            tracep->chgIData(oldp+50,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[2]),32);
            tracep->chgIData(oldp+51,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[3]),32);
            tracep->chgIData(oldp+52,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[4]),32);
            tracep->chgIData(oldp+53,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[5]),32);
            tracep->chgIData(oldp+54,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[6]),32);
            tracep->chgIData(oldp+55,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[7]),32);
            tracep->chgIData(oldp+56,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[8]),32);
            tracep->chgIData(oldp+57,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[9]),32);
            tracep->chgIData(oldp+58,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[10]),32);
            tracep->chgIData(oldp+59,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[11]),32);
            tracep->chgIData(oldp+60,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[12]),32);
            tracep->chgIData(oldp+61,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[13]),32);
            tracep->chgIData(oldp+62,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[14]),32);
            tracep->chgIData(oldp+63,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[15]),32);
            tracep->chgIData(oldp+64,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[16]),32);
            tracep->chgIData(oldp+65,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[17]),32);
            tracep->chgIData(oldp+66,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[18]),32);
            tracep->chgIData(oldp+67,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[19]),32);
            tracep->chgIData(oldp+68,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[20]),32);
            tracep->chgIData(oldp+69,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[21]),32);
            tracep->chgIData(oldp+70,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[22]),32);
            tracep->chgIData(oldp+71,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[23]),32);
            tracep->chgIData(oldp+72,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[24]),32);
            tracep->chgIData(oldp+73,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[25]),32);
            tracep->chgIData(oldp+74,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[26]),32);
            tracep->chgIData(oldp+75,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[27]),32);
            tracep->chgIData(oldp+76,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[28]),32);
            tracep->chgIData(oldp+77,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[29]),32);
            tracep->chgIData(oldp+78,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[30]),32);
            tracep->chgIData(oldp+79,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[31]),32);
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__openmips0__DOT__ex_mem0__DOT__mem_whilo));
            tracep->chgIData(oldp+81,(vlSelf->top__DOT__openmips0__DOT__ex_mem0__DOT__mem_hi),32);
            tracep->chgIData(oldp+82,(vlSelf->top__DOT__openmips0__DOT__ex_mem0__DOT__mem_lo),32);
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__openmips0__DOT__mem_wb0__DOT__wb_whilo));
            tracep->chgIData(oldp+84,(vlSelf->top__DOT__openmips0__DOT__mem_wb0__DOT__wb_hi),32);
            tracep->chgIData(oldp+85,(vlSelf->top__DOT__openmips0__DOT__mem_wb0__DOT__wb_lo),32);
        }
        tracep->chgBit(oldp+86,(vlSelf->clk));
        tracep->chgBit(oldp+87,(vlSelf->rst));
        tracep->chgIData(oldp+88,(((IData)(vlSelf->rst)
                                    ? 0U : ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr))
                                             ? 0U : 
                                            (((((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr) 
                                                == (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wd_i)) 
                                               & (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wreg_i)) 
                                              & (IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read))
                                              ? vlSelf->top__DOT__openmips0__DOT__wb_wdata_i
                                              : ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read)
                                                  ? 
                                                 vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs
                                                 [vlSelf->top__DOT__openmips0__DOT__reg1_addr]
                                                  : 0U))))),32);
        tracep->chgIData(oldp+89,(((IData)(vlSelf->rst)
                                    ? 0U : ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr))
                                             ? 0U : 
                                            (((((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr) 
                                                == (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wd_i)) 
                                               & (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wreg_i)) 
                                              & (IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read))
                                              ? vlSelf->top__DOT__openmips0__DOT__wb_wdata_i
                                              : ((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read)
                                                  ? 
                                                 vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs
                                                 [vlSelf->top__DOT__openmips0__DOT__reg2_addr]
                                                  : 0U))))),32);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
