/*
 * AntiAim.h
 *
 *  Created on: Oct 26, 2016
 *      Author: nullifiedcat
 */

#pragma once

class CatVar;
class CUserCmd;

namespace hacks::shared::antiaim
{

extern int safe_space;

void SetSafeSpace(int safespace);
bool ShouldAA(CUserCmd *cmd);
void ProcessUserCmd(CUserCmd *cmd);
}
