/*
    Copyright (C) 2026 Carl Hetherington <cth@carlh.net>

    This file is part of libdcp.

    libdcp is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    libdcp is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libdcp.  If not, see <http://www.gnu.org/licenses/>.

    In addition, as a special exception, the copyright holders give
    permission to link the code of portions of this program with the
    OpenSSL library under certain conditions as described in each
    individual source file, and distribute linked combinations
    including the two.

    You must obey the GNU General Public License in all respects
    for all of the code used other than OpenSSL.  If you modify
    file(s) with this exception, you may extend this exception to your
    version of the file(s), but you are not obligated to do so.  If you
    do not wish to do so, delete this exception statement from your
    version.  If you delete this exception statement from all source
    files in the program, then also delete it here.
*/


#include "dcp_assert.h"
#include "profile.h"
#include <string>


using namespace dcp;


dcp::Profile
dcp::string_to_profile(std::string const& profile)
{
	if (profile == "smpte-a") {
		return dcp::Profile::SMPTE_A;
	} else if (profile == "smpte-bv20") {
		return dcp::Profile::SMPTE_BV20;
	} else if (profile == "smpte-bv21") {
		return dcp::Profile::SMPTE_BV21;
	}

	DCP_ASSERT(false);
}


std::string
dcp::profile_to_string(Profile profile)
{
	switch (profile) {
	case dcp::Profile::SMPTE_A:
		return "smpte-a";
	case dcp::Profile::SMPTE_BV20:
		return "smpte-bv20";
	case dcp::Profile::SMPTE_BV21:
		return "smpte-bv21";
	}

	DCP_ASSERT(false);
}

