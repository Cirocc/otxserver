local buyPrem = TalkAction("!buypremium")

local config = {
	days = 10,
	maxDays = 30,
	price = 1000000
}

function buyPrem.onSay(player, words, param)
	if configManager.getBoolean(configKeys.FREE_PREMIUM) then
		return true
	end

	if player:getPremiumDays() <= config.maxDays then
		if player:removeMoneyBank(config.price) then
			player:addPremiumDays(config.days)
			player:sendTextMessage(MESSAGE_INFO_DESCR, "You have bought " .. config.days .." days of premium account.")
		else
			player:sendCancelMessage("You don't have enough money, " .. config.maxDays .. " days premium account costs " .. config.price .. " gold coins.")
			player:getPosition():sendMagicEffect(CONST_ME_POFF)
		end
	else
		player:sendCancelMessage("You can not buy more than " .. config.maxDays .. " days of premium account.")
		player:getPosition():sendMagicEffect(CONST_ME_POFF)
	end
	return false
end

buyPrem:separator(" ")
buyPrem:register()
