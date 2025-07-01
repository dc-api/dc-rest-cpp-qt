/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIGuildRoleTagsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildRoleTagsResponse::OAIGuildRoleTagsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildRoleTagsResponse::OAIGuildRoleTagsResponse() {
    this->initializeModel();
}

OAIGuildRoleTagsResponse::~OAIGuildRoleTagsResponse() {}

void OAIGuildRoleTagsResponse::initializeModel() {

    m_premium_subscriber_isSet = false;
    m_premium_subscriber_isValid = false;

    m_bot_id_isSet = false;
    m_bot_id_isValid = false;

    m_integration_id_isSet = false;
    m_integration_id_isValid = false;

    m_subscription_listing_id_isSet = false;
    m_subscription_listing_id_isValid = false;

    m_available_for_purchase_isSet = false;
    m_available_for_purchase_isValid = false;

    m_guild_connections_isSet = false;
    m_guild_connections_isValid = false;
}

void OAIGuildRoleTagsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildRoleTagsResponse::fromJsonObject(QJsonObject json) {

    m_premium_subscriber_isValid = ::dc_rest::fromJsonValue(m_premium_subscriber, json[QString("premium_subscriber")]);
    m_premium_subscriber_isSet = !json[QString("premium_subscriber")].isNull() && m_premium_subscriber_isValid;

    m_bot_id_isValid = ::dc_rest::fromJsonValue(m_bot_id, json[QString("bot_id")]);
    m_bot_id_isSet = !json[QString("bot_id")].isNull() && m_bot_id_isValid;

    m_integration_id_isValid = ::dc_rest::fromJsonValue(m_integration_id, json[QString("integration_id")]);
    m_integration_id_isSet = !json[QString("integration_id")].isNull() && m_integration_id_isValid;

    m_subscription_listing_id_isValid = ::dc_rest::fromJsonValue(m_subscription_listing_id, json[QString("subscription_listing_id")]);
    m_subscription_listing_id_isSet = !json[QString("subscription_listing_id")].isNull() && m_subscription_listing_id_isValid;

    m_available_for_purchase_isValid = ::dc_rest::fromJsonValue(m_available_for_purchase, json[QString("available_for_purchase")]);
    m_available_for_purchase_isSet = !json[QString("available_for_purchase")].isNull() && m_available_for_purchase_isValid;

    m_guild_connections_isValid = ::dc_rest::fromJsonValue(m_guild_connections, json[QString("guild_connections")]);
    m_guild_connections_isSet = !json[QString("guild_connections")].isNull() && m_guild_connections_isValid;
}

QString OAIGuildRoleTagsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildRoleTagsResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_premium_subscriber_isSet) {
        obj.insert(QString("premium_subscriber"), ::dc_rest::toJsonValue(m_premium_subscriber));
    }
    if (m_bot_id_isSet) {
        obj.insert(QString("bot_id"), ::dc_rest::toJsonValue(m_bot_id));
    }
    if (m_integration_id_isSet) {
        obj.insert(QString("integration_id"), ::dc_rest::toJsonValue(m_integration_id));
    }
    if (m_subscription_listing_id_isSet) {
        obj.insert(QString("subscription_listing_id"), ::dc_rest::toJsonValue(m_subscription_listing_id));
    }
    if (m_available_for_purchase_isSet) {
        obj.insert(QString("available_for_purchase"), ::dc_rest::toJsonValue(m_available_for_purchase));
    }
    if (m_guild_connections_isSet) {
        obj.insert(QString("guild_connections"), ::dc_rest::toJsonValue(m_guild_connections));
    }
    return obj;
}

QJsonValue OAIGuildRoleTagsResponse::getPremiumSubscriber() const {
    return m_premium_subscriber;
}
void OAIGuildRoleTagsResponse::setPremiumSubscriber(const QJsonValue &premium_subscriber) {
    m_premium_subscriber = premium_subscriber;
    m_premium_subscriber_isSet = true;
}

bool OAIGuildRoleTagsResponse::is_premium_subscriber_Set() const{
    return m_premium_subscriber_isSet;
}

bool OAIGuildRoleTagsResponse::is_premium_subscriber_Valid() const{
    return m_premium_subscriber_isValid;
}

QString OAIGuildRoleTagsResponse::getBotId() const {
    return m_bot_id;
}
void OAIGuildRoleTagsResponse::setBotId(const QString &bot_id) {
    m_bot_id = bot_id;
    m_bot_id_isSet = true;
}

bool OAIGuildRoleTagsResponse::is_bot_id_Set() const{
    return m_bot_id_isSet;
}

bool OAIGuildRoleTagsResponse::is_bot_id_Valid() const{
    return m_bot_id_isValid;
}

QString OAIGuildRoleTagsResponse::getIntegrationId() const {
    return m_integration_id;
}
void OAIGuildRoleTagsResponse::setIntegrationId(const QString &integration_id) {
    m_integration_id = integration_id;
    m_integration_id_isSet = true;
}

bool OAIGuildRoleTagsResponse::is_integration_id_Set() const{
    return m_integration_id_isSet;
}

bool OAIGuildRoleTagsResponse::is_integration_id_Valid() const{
    return m_integration_id_isValid;
}

QString OAIGuildRoleTagsResponse::getSubscriptionListingId() const {
    return m_subscription_listing_id;
}
void OAIGuildRoleTagsResponse::setSubscriptionListingId(const QString &subscription_listing_id) {
    m_subscription_listing_id = subscription_listing_id;
    m_subscription_listing_id_isSet = true;
}

bool OAIGuildRoleTagsResponse::is_subscription_listing_id_Set() const{
    return m_subscription_listing_id_isSet;
}

bool OAIGuildRoleTagsResponse::is_subscription_listing_id_Valid() const{
    return m_subscription_listing_id_isValid;
}

QJsonValue OAIGuildRoleTagsResponse::getAvailableForPurchase() const {
    return m_available_for_purchase;
}
void OAIGuildRoleTagsResponse::setAvailableForPurchase(const QJsonValue &available_for_purchase) {
    m_available_for_purchase = available_for_purchase;
    m_available_for_purchase_isSet = true;
}

bool OAIGuildRoleTagsResponse::is_available_for_purchase_Set() const{
    return m_available_for_purchase_isSet;
}

bool OAIGuildRoleTagsResponse::is_available_for_purchase_Valid() const{
    return m_available_for_purchase_isValid;
}

QJsonValue OAIGuildRoleTagsResponse::getGuildConnections() const {
    return m_guild_connections;
}
void OAIGuildRoleTagsResponse::setGuildConnections(const QJsonValue &guild_connections) {
    m_guild_connections = guild_connections;
    m_guild_connections_isSet = true;
}

bool OAIGuildRoleTagsResponse::is_guild_connections_Set() const{
    return m_guild_connections_isSet;
}

bool OAIGuildRoleTagsResponse::is_guild_connections_Valid() const{
    return m_guild_connections_isValid;
}

bool OAIGuildRoleTagsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_premium_subscriber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bot_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_integration_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscription_listing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_available_for_purchase_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_connections_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildRoleTagsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
