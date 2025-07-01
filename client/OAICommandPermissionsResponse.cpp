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

#include "OAICommandPermissionsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICommandPermissionsResponse::OAICommandPermissionsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommandPermissionsResponse::OAICommandPermissionsResponse() {
    this->initializeModel();
}

OAICommandPermissionsResponse::~OAICommandPermissionsResponse() {}

void OAICommandPermissionsResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_application_id_isSet = false;
    m_application_id_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_permissions_isSet = false;
    m_permissions_isValid = false;
}

void OAICommandPermissionsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommandPermissionsResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_permissions_isValid = ::dc_rest::fromJsonValue(m_permissions, json[QString("permissions")]);
    m_permissions_isSet = !json[QString("permissions")].isNull() && m_permissions_isValid;
}

QString OAICommandPermissionsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommandPermissionsResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_permissions.size() > 0) {
        obj.insert(QString("permissions"), ::dc_rest::toJsonValue(m_permissions));
    }
    return obj;
}

QString OAICommandPermissionsResponse::getId() const {
    return m_id;
}
void OAICommandPermissionsResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICommandPermissionsResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAICommandPermissionsResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICommandPermissionsResponse::getApplicationId() const {
    return m_application_id;
}
void OAICommandPermissionsResponse::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAICommandPermissionsResponse::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAICommandPermissionsResponse::is_application_id_Valid() const{
    return m_application_id_isValid;
}

QString OAICommandPermissionsResponse::getGuildId() const {
    return m_guild_id;
}
void OAICommandPermissionsResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAICommandPermissionsResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAICommandPermissionsResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QList<OAICommandPermissionResponse> OAICommandPermissionsResponse::getPermissions() const {
    return m_permissions;
}
void OAICommandPermissionsResponse::setPermissions(const QList<OAICommandPermissionResponse> &permissions) {
    m_permissions = permissions;
    m_permissions_isSet = true;
}

bool OAICommandPermissionsResponse::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool OAICommandPermissionsResponse::is_permissions_Valid() const{
    return m_permissions_isValid;
}

bool OAICommandPermissionsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_application_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_permissions.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommandPermissionsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_application_id_isValid && m_guild_id_isValid && m_permissions_isValid && true;
}

} // namespace dc_rest
