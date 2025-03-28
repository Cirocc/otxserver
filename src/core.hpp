/**
 * Canary - A free and open-source MMORPG server emulator
 * Copyright (©) 2019-2022 OpenTibiaBR <opentibiabr@outlook.com>
 * Repository: https://github.com/opentibiabr/canary
 * License: https://github.com/opentibiabr/canary/blob/main/LICENSE
 * Contributors: https://github.com/opentibiabr/canary/graphs/contributors
 * Website: https://docs.opentibiabr.org/
*/

#ifndef SRC_CORE_HPP_
#define SRC_CORE_HPP_

static constexpr auto STATUS_SERVER_NAME = "The OTX Server";
static constexpr auto STATUS_SERVER_VERSION = "6.3.0";
static constexpr auto STATUS_SERVER_DEVELOPERS = "OpenTibiaBR Organization and data organizer: Mattyx14";

static constexpr auto AUTHENTICATOR_DIGITS = 6U;
static constexpr auto AUTHENTICATOR_PERIOD = 30U;

static constexpr auto CLIENT_VERSION = 1291;

#define CLIENT_VERSION_UPPER (CLIENT_VERSION / 100)
#define CLIENT_VERSION_LOWER (CLIENT_VERSION % 100)

#endif  // SRC_CORE_HPP_
