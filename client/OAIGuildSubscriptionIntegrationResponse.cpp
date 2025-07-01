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

#include "OAIGuildSubscriptionIntegrationResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildSubscriptionIntegrationResponse::OAIGuildSubscriptionIntegrationResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildSubscriptionIntegrationResponse::OAIGuildSubscriptionIntegrationResponse() {
    this->initializeModel();
}

OAIGuildSubscriptionIntegrationResponse::~OAIGuildSubscriptionIntegrationResponse() {}

void OAIGuildSubscriptionIntegrationResponse::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_account_isSet = false;
    m_account_isValid = false;

    m_enabled_isSet = false;
    m_enabled_isValid = false;
}

void OAIGuildSubscriptionIntegrationResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildSubscriptionIntegrationResponse::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_account_isValid = ::dc_rest::fromJsonValue(m_account, json[QString("account")]);
    m_account_isSet = !json[QString("account")].isNull() && m_account_isValid;

    m_enabled_isValid = ::dc_rest::fromJsonValue(m_enabled, json[QString("enabled")]);
    m_enabled_isSet = !json[QString("enabled")].isNull() && m_enabled_isValid;
}

QString OAIGuildSubscriptionIntegrationResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildSubscriptionIntegrationResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_account.isSet()) {
        obj.insert(QString("account"), ::dc_rest::toJsonValue(m_account));
    }
    if (m_enabled_isSet) {
        obj.insert(QString("enabled"), ::dc_rest::toJsonValue(m_enabled));
    }
    return obj;
}

QString OAIGuildSubscriptionIntegrationResponse::getType() const {
    return m_type;
}
void OAIGuildSubscriptionIntegrationResponse::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIGuildSubscriptionIntegrationResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIGuildSubscriptionIntegrationResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIGuildSubscriptionIntegrationResponse::getId() const {
    return m_id;
}
void OAIGuildSubscriptionIntegrationResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGuildSubscriptionIntegrationResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGuildSubscriptionIntegrationResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIGuildSubscriptionIntegrationResponse::getName() const {
    return m_name;
}
void OAIGuildSubscriptionIntegrationResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGuildSubscriptionIntegrationResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGuildSubscriptionIntegrationResponse::is_name_Valid() const{
    return m_name_isValid;
}

OAIAccountResponse OAIGuildSubscriptionIntegrationResponse::getAccount() const {
    return m_account;
}
void OAIGuildSubscriptionIntegrationResponse::setAccount(const OAIAccountResponse &account) {
    m_account = account;
    m_account_isSet = true;
}

bool OAIGuildSubscriptionIntegrationResponse::is_account_Set() const{
    return m_account_isSet;
}

bool OAIGuildSubscriptionIntegrationResponse::is_account_Valid() const{
    return m_account_isValid;
}

bool OAIGuildSubscriptionIntegrationResponse::isEnabled() const {
    return m_enabled;
}
void OAIGuildSubscriptionIntegrationResponse::setEnabled(const bool &enabled) {
    m_enabled = enabled;
    m_enabled_isSet = true;
}

bool OAIGuildSubscriptionIntegrationResponse::is_enabled_Set() const{
    return m_enabled_isSet;
}

bool OAIGuildSubscriptionIntegrationResponse::is_enabled_Valid() const{
    return m_enabled_isValid;
}

bool OAIGuildSubscriptionIntegrationResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_account.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildSubscriptionIntegrationResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && true;
}

} // namespace dc_rest
