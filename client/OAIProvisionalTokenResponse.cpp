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

#include "OAIProvisionalTokenResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIProvisionalTokenResponse::OAIProvisionalTokenResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProvisionalTokenResponse::OAIProvisionalTokenResponse() {
    this->initializeModel();
}

OAIProvisionalTokenResponse::~OAIProvisionalTokenResponse() {}

void OAIProvisionalTokenResponse::initializeModel() {

    m_token_type_isSet = false;
    m_token_type_isValid = false;

    m_access_token_isSet = false;
    m_access_token_isValid = false;

    m_expires_in_isSet = false;
    m_expires_in_isValid = false;

    m_scope_isSet = false;
    m_scope_isValid = false;

    m_id_token_isSet = false;
    m_id_token_isValid = false;

    m_refresh_token_isSet = false;
    m_refresh_token_isValid = false;

    m_scopes_isSet = false;
    m_scopes_isValid = false;

    m_expires_at_s_isSet = false;
    m_expires_at_s_isValid = false;
}

void OAIProvisionalTokenResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProvisionalTokenResponse::fromJsonObject(QJsonObject json) {

    m_token_type_isValid = ::dc_rest::fromJsonValue(m_token_type, json[QString("token_type")]);
    m_token_type_isSet = !json[QString("token_type")].isNull() && m_token_type_isValid;

    m_access_token_isValid = ::dc_rest::fromJsonValue(m_access_token, json[QString("access_token")]);
    m_access_token_isSet = !json[QString("access_token")].isNull() && m_access_token_isValid;

    m_expires_in_isValid = ::dc_rest::fromJsonValue(m_expires_in, json[QString("expires_in")]);
    m_expires_in_isSet = !json[QString("expires_in")].isNull() && m_expires_in_isValid;

    m_scope_isValid = ::dc_rest::fromJsonValue(m_scope, json[QString("scope")]);
    m_scope_isSet = !json[QString("scope")].isNull() && m_scope_isValid;

    m_id_token_isValid = ::dc_rest::fromJsonValue(m_id_token, json[QString("id_token")]);
    m_id_token_isSet = !json[QString("id_token")].isNull() && m_id_token_isValid;

    m_refresh_token_isValid = ::dc_rest::fromJsonValue(m_refresh_token, json[QString("refresh_token")]);
    m_refresh_token_isSet = !json[QString("refresh_token")].isNull() && m_refresh_token_isValid;

    m_scopes_isValid = ::dc_rest::fromJsonValue(m_scopes, json[QString("scopes")]);
    m_scopes_isSet = !json[QString("scopes")].isNull() && m_scopes_isValid;

    m_expires_at_s_isValid = ::dc_rest::fromJsonValue(m_expires_at_s, json[QString("expires_at_s")]);
    m_expires_at_s_isSet = !json[QString("expires_at_s")].isNull() && m_expires_at_s_isValid;
}

QString OAIProvisionalTokenResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProvisionalTokenResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_token_type_isSet) {
        obj.insert(QString("token_type"), ::dc_rest::toJsonValue(m_token_type));
    }
    if (m_access_token_isSet) {
        obj.insert(QString("access_token"), ::dc_rest::toJsonValue(m_access_token));
    }
    if (m_expires_in_isSet) {
        obj.insert(QString("expires_in"), ::dc_rest::toJsonValue(m_expires_in));
    }
    if (m_scope_isSet) {
        obj.insert(QString("scope"), ::dc_rest::toJsonValue(m_scope));
    }
    if (m_id_token_isSet) {
        obj.insert(QString("id_token"), ::dc_rest::toJsonValue(m_id_token));
    }
    if (m_refresh_token_isSet) {
        obj.insert(QString("refresh_token"), ::dc_rest::toJsonValue(m_refresh_token));
    }
    if (m_scopes.size() > 0) {
        obj.insert(QString("scopes"), ::dc_rest::toJsonValue(m_scopes));
    }
    if (m_expires_at_s_isSet) {
        obj.insert(QString("expires_at_s"), ::dc_rest::toJsonValue(m_expires_at_s));
    }
    return obj;
}

QString OAIProvisionalTokenResponse::getTokenType() const {
    return m_token_type;
}
void OAIProvisionalTokenResponse::setTokenType(const QString &token_type) {
    m_token_type = token_type;
    m_token_type_isSet = true;
}

bool OAIProvisionalTokenResponse::is_token_type_Set() const{
    return m_token_type_isSet;
}

bool OAIProvisionalTokenResponse::is_token_type_Valid() const{
    return m_token_type_isValid;
}

QString OAIProvisionalTokenResponse::getAccessToken() const {
    return m_access_token;
}
void OAIProvisionalTokenResponse::setAccessToken(const QString &access_token) {
    m_access_token = access_token;
    m_access_token_isSet = true;
}

bool OAIProvisionalTokenResponse::is_access_token_Set() const{
    return m_access_token_isSet;
}

bool OAIProvisionalTokenResponse::is_access_token_Valid() const{
    return m_access_token_isValid;
}

qint32 OAIProvisionalTokenResponse::getExpiresIn() const {
    return m_expires_in;
}
void OAIProvisionalTokenResponse::setExpiresIn(const qint32 &expires_in) {
    m_expires_in = expires_in;
    m_expires_in_isSet = true;
}

bool OAIProvisionalTokenResponse::is_expires_in_Set() const{
    return m_expires_in_isSet;
}

bool OAIProvisionalTokenResponse::is_expires_in_Valid() const{
    return m_expires_in_isValid;
}

QString OAIProvisionalTokenResponse::getScope() const {
    return m_scope;
}
void OAIProvisionalTokenResponse::setScope(const QString &scope) {
    m_scope = scope;
    m_scope_isSet = true;
}

bool OAIProvisionalTokenResponse::is_scope_Set() const{
    return m_scope_isSet;
}

bool OAIProvisionalTokenResponse::is_scope_Valid() const{
    return m_scope_isValid;
}

QString OAIProvisionalTokenResponse::getIdToken() const {
    return m_id_token;
}
void OAIProvisionalTokenResponse::setIdToken(const QString &id_token) {
    m_id_token = id_token;
    m_id_token_isSet = true;
}

bool OAIProvisionalTokenResponse::is_id_token_Set() const{
    return m_id_token_isSet;
}

bool OAIProvisionalTokenResponse::is_id_token_Valid() const{
    return m_id_token_isValid;
}

QString OAIProvisionalTokenResponse::getRefreshToken() const {
    return m_refresh_token;
}
void OAIProvisionalTokenResponse::setRefreshToken(const QString &refresh_token) {
    m_refresh_token = refresh_token;
    m_refresh_token_isSet = true;
}

bool OAIProvisionalTokenResponse::is_refresh_token_Set() const{
    return m_refresh_token_isSet;
}

bool OAIProvisionalTokenResponse::is_refresh_token_Valid() const{
    return m_refresh_token_isValid;
}

QList<QString> OAIProvisionalTokenResponse::getScopes() const {
    return m_scopes;
}
void OAIProvisionalTokenResponse::setScopes(const QList<QString> &scopes) {
    m_scopes = scopes;
    m_scopes_isSet = true;
}

bool OAIProvisionalTokenResponse::is_scopes_Set() const{
    return m_scopes_isSet;
}

bool OAIProvisionalTokenResponse::is_scopes_Valid() const{
    return m_scopes_isValid;
}

qint32 OAIProvisionalTokenResponse::getExpiresAtS() const {
    return m_expires_at_s;
}
void OAIProvisionalTokenResponse::setExpiresAtS(const qint32 &expires_at_s) {
    m_expires_at_s = expires_at_s;
    m_expires_at_s_isSet = true;
}

bool OAIProvisionalTokenResponse::is_expires_at_s_Set() const{
    return m_expires_at_s_isSet;
}

bool OAIProvisionalTokenResponse::is_expires_at_s_Valid() const{
    return m_expires_at_s_isValid;
}

bool OAIProvisionalTokenResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_token_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_access_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expires_in_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_scope_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_refresh_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_scopes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_expires_at_s_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProvisionalTokenResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_token_type_isValid && m_access_token_isValid && m_expires_in_isValid && m_scope_isValid && m_id_token_isValid && true;
}

} // namespace dc_rest
