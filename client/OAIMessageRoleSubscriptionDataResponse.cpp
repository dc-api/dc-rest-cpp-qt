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

#include "OAIMessageRoleSubscriptionDataResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMessageRoleSubscriptionDataResponse::OAIMessageRoleSubscriptionDataResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageRoleSubscriptionDataResponse::OAIMessageRoleSubscriptionDataResponse() {
    this->initializeModel();
}

OAIMessageRoleSubscriptionDataResponse::~OAIMessageRoleSubscriptionDataResponse() {}

void OAIMessageRoleSubscriptionDataResponse::initializeModel() {

    m_role_subscription_listing_id_isSet = false;
    m_role_subscription_listing_id_isValid = false;

    m_tier_name_isSet = false;
    m_tier_name_isValid = false;

    m_total_months_subscribed_isSet = false;
    m_total_months_subscribed_isValid = false;

    m_is_renewal_isSet = false;
    m_is_renewal_isValid = false;
}

void OAIMessageRoleSubscriptionDataResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageRoleSubscriptionDataResponse::fromJsonObject(QJsonObject json) {

    m_role_subscription_listing_id_isValid = ::dc_rest::fromJsonValue(m_role_subscription_listing_id, json[QString("role_subscription_listing_id")]);
    m_role_subscription_listing_id_isSet = !json[QString("role_subscription_listing_id")].isNull() && m_role_subscription_listing_id_isValid;

    m_tier_name_isValid = ::dc_rest::fromJsonValue(m_tier_name, json[QString("tier_name")]);
    m_tier_name_isSet = !json[QString("tier_name")].isNull() && m_tier_name_isValid;

    m_total_months_subscribed_isValid = ::dc_rest::fromJsonValue(m_total_months_subscribed, json[QString("total_months_subscribed")]);
    m_total_months_subscribed_isSet = !json[QString("total_months_subscribed")].isNull() && m_total_months_subscribed_isValid;

    m_is_renewal_isValid = ::dc_rest::fromJsonValue(m_is_renewal, json[QString("is_renewal")]);
    m_is_renewal_isSet = !json[QString("is_renewal")].isNull() && m_is_renewal_isValid;
}

QString OAIMessageRoleSubscriptionDataResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageRoleSubscriptionDataResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_role_subscription_listing_id_isSet) {
        obj.insert(QString("role_subscription_listing_id"), ::dc_rest::toJsonValue(m_role_subscription_listing_id));
    }
    if (m_tier_name_isSet) {
        obj.insert(QString("tier_name"), ::dc_rest::toJsonValue(m_tier_name));
    }
    if (m_total_months_subscribed_isSet) {
        obj.insert(QString("total_months_subscribed"), ::dc_rest::toJsonValue(m_total_months_subscribed));
    }
    if (m_is_renewal_isSet) {
        obj.insert(QString("is_renewal"), ::dc_rest::toJsonValue(m_is_renewal));
    }
    return obj;
}

QString OAIMessageRoleSubscriptionDataResponse::getRoleSubscriptionListingId() const {
    return m_role_subscription_listing_id;
}
void OAIMessageRoleSubscriptionDataResponse::setRoleSubscriptionListingId(const QString &role_subscription_listing_id) {
    m_role_subscription_listing_id = role_subscription_listing_id;
    m_role_subscription_listing_id_isSet = true;
}

bool OAIMessageRoleSubscriptionDataResponse::is_role_subscription_listing_id_Set() const{
    return m_role_subscription_listing_id_isSet;
}

bool OAIMessageRoleSubscriptionDataResponse::is_role_subscription_listing_id_Valid() const{
    return m_role_subscription_listing_id_isValid;
}

QString OAIMessageRoleSubscriptionDataResponse::getTierName() const {
    return m_tier_name;
}
void OAIMessageRoleSubscriptionDataResponse::setTierName(const QString &tier_name) {
    m_tier_name = tier_name;
    m_tier_name_isSet = true;
}

bool OAIMessageRoleSubscriptionDataResponse::is_tier_name_Set() const{
    return m_tier_name_isSet;
}

bool OAIMessageRoleSubscriptionDataResponse::is_tier_name_Valid() const{
    return m_tier_name_isValid;
}

qint32 OAIMessageRoleSubscriptionDataResponse::getTotalMonthsSubscribed() const {
    return m_total_months_subscribed;
}
void OAIMessageRoleSubscriptionDataResponse::setTotalMonthsSubscribed(const qint32 &total_months_subscribed) {
    m_total_months_subscribed = total_months_subscribed;
    m_total_months_subscribed_isSet = true;
}

bool OAIMessageRoleSubscriptionDataResponse::is_total_months_subscribed_Set() const{
    return m_total_months_subscribed_isSet;
}

bool OAIMessageRoleSubscriptionDataResponse::is_total_months_subscribed_Valid() const{
    return m_total_months_subscribed_isValid;
}

bool OAIMessageRoleSubscriptionDataResponse::isIsRenewal() const {
    return m_is_renewal;
}
void OAIMessageRoleSubscriptionDataResponse::setIsRenewal(const bool &is_renewal) {
    m_is_renewal = is_renewal;
    m_is_renewal_isSet = true;
}

bool OAIMessageRoleSubscriptionDataResponse::is_is_renewal_Set() const{
    return m_is_renewal_isSet;
}

bool OAIMessageRoleSubscriptionDataResponse::is_is_renewal_Valid() const{
    return m_is_renewal_isValid;
}

bool OAIMessageRoleSubscriptionDataResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_role_subscription_listing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tier_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_months_subscribed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_renewal_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageRoleSubscriptionDataResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_role_subscription_listing_id_isValid && m_tier_name_isValid && m_total_months_subscribed_isValid && m_is_renewal_isValid && true;
}

} // namespace dc_rest
