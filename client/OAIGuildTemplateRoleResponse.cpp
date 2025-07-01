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

#include "OAIGuildTemplateRoleResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildTemplateRoleResponse::OAIGuildTemplateRoleResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildTemplateRoleResponse::OAIGuildTemplateRoleResponse() {
    this->initializeModel();
}

OAIGuildTemplateRoleResponse::~OAIGuildTemplateRoleResponse() {}

void OAIGuildTemplateRoleResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_permissions_isSet = false;
    m_permissions_isValid = false;

    m_color_isSet = false;
    m_color_isValid = false;

    m_hoist_isSet = false;
    m_hoist_isValid = false;

    m_mentionable_isSet = false;
    m_mentionable_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_unicode_emoji_isSet = false;
    m_unicode_emoji_isValid = false;
}

void OAIGuildTemplateRoleResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildTemplateRoleResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_permissions_isValid = ::dc_rest::fromJsonValue(m_permissions, json[QString("permissions")]);
    m_permissions_isSet = !json[QString("permissions")].isNull() && m_permissions_isValid;

    m_color_isValid = ::dc_rest::fromJsonValue(m_color, json[QString("color")]);
    m_color_isSet = !json[QString("color")].isNull() && m_color_isValid;

    m_hoist_isValid = ::dc_rest::fromJsonValue(m_hoist, json[QString("hoist")]);
    m_hoist_isSet = !json[QString("hoist")].isNull() && m_hoist_isValid;

    m_mentionable_isValid = ::dc_rest::fromJsonValue(m_mentionable, json[QString("mentionable")]);
    m_mentionable_isSet = !json[QString("mentionable")].isNull() && m_mentionable_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_unicode_emoji_isValid = ::dc_rest::fromJsonValue(m_unicode_emoji, json[QString("unicode_emoji")]);
    m_unicode_emoji_isSet = !json[QString("unicode_emoji")].isNull() && m_unicode_emoji_isValid;
}

QString OAIGuildTemplateRoleResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildTemplateRoleResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_permissions_isSet) {
        obj.insert(QString("permissions"), ::dc_rest::toJsonValue(m_permissions));
    }
    if (m_color_isSet) {
        obj.insert(QString("color"), ::dc_rest::toJsonValue(m_color));
    }
    if (m_hoist_isSet) {
        obj.insert(QString("hoist"), ::dc_rest::toJsonValue(m_hoist));
    }
    if (m_mentionable_isSet) {
        obj.insert(QString("mentionable"), ::dc_rest::toJsonValue(m_mentionable));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_unicode_emoji_isSet) {
        obj.insert(QString("unicode_emoji"), ::dc_rest::toJsonValue(m_unicode_emoji));
    }
    return obj;
}

qint32 OAIGuildTemplateRoleResponse::getId() const {
    return m_id;
}
void OAIGuildTemplateRoleResponse::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGuildTemplateRoleResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGuildTemplateRoleResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIGuildTemplateRoleResponse::getName() const {
    return m_name;
}
void OAIGuildTemplateRoleResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGuildTemplateRoleResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGuildTemplateRoleResponse::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIGuildTemplateRoleResponse::getPermissions() const {
    return m_permissions;
}
void OAIGuildTemplateRoleResponse::setPermissions(const QString &permissions) {
    m_permissions = permissions;
    m_permissions_isSet = true;
}

bool OAIGuildTemplateRoleResponse::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool OAIGuildTemplateRoleResponse::is_permissions_Valid() const{
    return m_permissions_isValid;
}

qint32 OAIGuildTemplateRoleResponse::getColor() const {
    return m_color;
}
void OAIGuildTemplateRoleResponse::setColor(const qint32 &color) {
    m_color = color;
    m_color_isSet = true;
}

bool OAIGuildTemplateRoleResponse::is_color_Set() const{
    return m_color_isSet;
}

bool OAIGuildTemplateRoleResponse::is_color_Valid() const{
    return m_color_isValid;
}

bool OAIGuildTemplateRoleResponse::isHoist() const {
    return m_hoist;
}
void OAIGuildTemplateRoleResponse::setHoist(const bool &hoist) {
    m_hoist = hoist;
    m_hoist_isSet = true;
}

bool OAIGuildTemplateRoleResponse::is_hoist_Set() const{
    return m_hoist_isSet;
}

bool OAIGuildTemplateRoleResponse::is_hoist_Valid() const{
    return m_hoist_isValid;
}

bool OAIGuildTemplateRoleResponse::isMentionable() const {
    return m_mentionable;
}
void OAIGuildTemplateRoleResponse::setMentionable(const bool &mentionable) {
    m_mentionable = mentionable;
    m_mentionable_isSet = true;
}

bool OAIGuildTemplateRoleResponse::is_mentionable_Set() const{
    return m_mentionable_isSet;
}

bool OAIGuildTemplateRoleResponse::is_mentionable_Valid() const{
    return m_mentionable_isValid;
}

QString OAIGuildTemplateRoleResponse::getIcon() const {
    return m_icon;
}
void OAIGuildTemplateRoleResponse::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIGuildTemplateRoleResponse::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIGuildTemplateRoleResponse::is_icon_Valid() const{
    return m_icon_isValid;
}

QString OAIGuildTemplateRoleResponse::getUnicodeEmoji() const {
    return m_unicode_emoji;
}
void OAIGuildTemplateRoleResponse::setUnicodeEmoji(const QString &unicode_emoji) {
    m_unicode_emoji = unicode_emoji;
    m_unicode_emoji_isSet = true;
}

bool OAIGuildTemplateRoleResponse::is_unicode_emoji_Set() const{
    return m_unicode_emoji_isSet;
}

bool OAIGuildTemplateRoleResponse::is_unicode_emoji_Valid() const{
    return m_unicode_emoji_isValid;
}

bool OAIGuildTemplateRoleResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_permissions_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hoist_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mentionable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_unicode_emoji_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildTemplateRoleResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_permissions_isValid && m_color_isValid && m_hoist_isValid && m_mentionable_isValid && true;
}

} // namespace dc_rest
