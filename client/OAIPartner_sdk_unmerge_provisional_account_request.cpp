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

#include "OAIPartner_sdk_unmerge_provisional_account_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIPartner_sdk_unmerge_provisional_account_request::OAIPartner_sdk_unmerge_provisional_account_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPartner_sdk_unmerge_provisional_account_request::OAIPartner_sdk_unmerge_provisional_account_request() {
    this->initializeModel();
}

OAIPartner_sdk_unmerge_provisional_account_request::~OAIPartner_sdk_unmerge_provisional_account_request() {}

void OAIPartner_sdk_unmerge_provisional_account_request::initializeModel() {

    m_client_id_isSet = false;
    m_client_id_isValid = false;

    m_external_auth_token_isSet = false;
    m_external_auth_token_isValid = false;

    m_external_auth_type_isSet = false;
    m_external_auth_type_isValid = false;

    m_client_secret_isSet = false;
    m_client_secret_isValid = false;
}

void OAIPartner_sdk_unmerge_provisional_account_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPartner_sdk_unmerge_provisional_account_request::fromJsonObject(QJsonObject json) {

    m_client_id_isValid = ::dc_rest::fromJsonValue(m_client_id, json[QString("client_id")]);
    m_client_id_isSet = !json[QString("client_id")].isNull() && m_client_id_isValid;

    m_external_auth_token_isValid = ::dc_rest::fromJsonValue(m_external_auth_token, json[QString("external_auth_token")]);
    m_external_auth_token_isSet = !json[QString("external_auth_token")].isNull() && m_external_auth_token_isValid;

    m_external_auth_type_isValid = ::dc_rest::fromJsonValue(m_external_auth_type, json[QString("external_auth_type")]);
    m_external_auth_type_isSet = !json[QString("external_auth_type")].isNull() && m_external_auth_type_isValid;

    m_client_secret_isValid = ::dc_rest::fromJsonValue(m_client_secret, json[QString("client_secret")]);
    m_client_secret_isSet = !json[QString("client_secret")].isNull() && m_client_secret_isValid;
}

QString OAIPartner_sdk_unmerge_provisional_account_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPartner_sdk_unmerge_provisional_account_request::asJsonObject() const {
    QJsonObject obj;
    if (m_client_id_isSet) {
        obj.insert(QString("client_id"), ::dc_rest::toJsonValue(m_client_id));
    }
    if (m_external_auth_token_isSet) {
        obj.insert(QString("external_auth_token"), ::dc_rest::toJsonValue(m_external_auth_token));
    }
    if (m_external_auth_type_isSet) {
        obj.insert(QString("external_auth_type"), ::dc_rest::toJsonValue(m_external_auth_type));
    }
    if (m_client_secret_isSet) {
        obj.insert(QString("client_secret"), ::dc_rest::toJsonValue(m_client_secret));
    }
    return obj;
}

QString OAIPartner_sdk_unmerge_provisional_account_request::getClientId() const {
    return m_client_id;
}
void OAIPartner_sdk_unmerge_provisional_account_request::setClientId(const QString &client_id) {
    m_client_id = client_id;
    m_client_id_isSet = true;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::is_client_id_Set() const{
    return m_client_id_isSet;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::is_client_id_Valid() const{
    return m_client_id_isValid;
}

QString OAIPartner_sdk_unmerge_provisional_account_request::getExternalAuthToken() const {
    return m_external_auth_token;
}
void OAIPartner_sdk_unmerge_provisional_account_request::setExternalAuthToken(const QString &external_auth_token) {
    m_external_auth_token = external_auth_token;
    m_external_auth_token_isSet = true;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::is_external_auth_token_Set() const{
    return m_external_auth_token_isSet;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::is_external_auth_token_Valid() const{
    return m_external_auth_token_isValid;
}

QString OAIPartner_sdk_unmerge_provisional_account_request::getExternalAuthType() const {
    return m_external_auth_type;
}
void OAIPartner_sdk_unmerge_provisional_account_request::setExternalAuthType(const QString &external_auth_type) {
    m_external_auth_type = external_auth_type;
    m_external_auth_type_isSet = true;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::is_external_auth_type_Set() const{
    return m_external_auth_type_isSet;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::is_external_auth_type_Valid() const{
    return m_external_auth_type_isValid;
}

QString OAIPartner_sdk_unmerge_provisional_account_request::getClientSecret() const {
    return m_client_secret;
}
void OAIPartner_sdk_unmerge_provisional_account_request::setClientSecret(const QString &client_secret) {
    m_client_secret = client_secret;
    m_client_secret_isSet = true;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::is_client_secret_Set() const{
    return m_client_secret_isSet;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::is_client_secret_Valid() const{
    return m_client_secret_isValid;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_client_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_external_auth_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_external_auth_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_client_secret_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPartner_sdk_unmerge_provisional_account_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_client_id_isValid && m_external_auth_token_isValid && m_external_auth_type_isValid && true;
}

} // namespace dc_rest
