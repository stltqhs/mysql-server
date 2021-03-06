/* Copyright (c) 2008, 2021, Oracle and/or its affiliates.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License, version 2.0,
   as published by the Free Software Foundation.

   This program is also distributed with certain software (including
   but not limited to OpenSSL) that is licensed under separate terms,
   as designated in a particular file or component or in included license
   documentation.  The authors of MySQL hereby grant you an additional
   permission to link the program and your derivative works with the
   separately licensed software that they have included with MySQL.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License, version 2.0, for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA */

#ifndef ENABLE_COM_H
#define ENABLE_COM_H

#include "SignalData.hpp"

#define JAM_FILE_ID 40


class EnableComReq  {
  friend class Qmgr;
  friend class Trpman;
  friend class TrpmanProxy;

public:
  STATIC_CONST( SignalLength = 2 + NodeBitmask::Size );
private:

  Uint32 m_senderRef;
  Uint32 m_senderData;
  Uint32 m_nodeIds[NodeBitmask::Size];
};

class EnableComConf  {
  friend class Qmgr;
  friend class Trpman;
  friend class TrpmanProxy;
  friend class Cmvmi;

public:
  STATIC_CONST( SignalLength = 2 + NodeBitmask::Size );
private:

  Uint32 m_senderRef;
  Uint32 m_senderData;
  Uint32 m_nodeIds[NodeBitmask::Size];
};


#undef JAM_FILE_ID

#endif
