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

#include "OAIGet_sticker_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGet_sticker_200_response::OAIGet_sticker_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGet_sticker_200_response::OAIGet_sticker_200_response() {
    this->initializeModel();
}

OAIGet_sticker_200_response::~OAIGet_sticker_200_response() {}

void OAIGet_sticker_200_response::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_tags_isSet = false;
    m_tags_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_available_isSet = false;
    m_available_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_pack_id_isSet = false;
    m_pack_id_isValid = false;

    m_sort_value_isSet = false;
    m_sort_value_isValid = false;

    m_format_type_isSet = false;
    m_format_type_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;
}

void OAIGet_sticker_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGet_sticker_200_response::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_tags_isValid = ::dc_rest::fromJsonValue(m_tags, json[QString("tags")]);
    m_tags_isSet = !json[QString("tags")].isNull() && m_tags_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_available_isValid = ::dc_rest::fromJsonValue(m_available, json[QString("available")]);
    m_available_isSet = !json[QString("available")].isNull() && m_available_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_pack_id_isValid = ::dc_rest::fromJsonValue(m_pack_id, json[QString("pack_id")]);
    m_pack_id_isSet = !json[QString("pack_id")].isNull() && m_pack_id_isValid;

    m_sort_value_isValid = ::dc_rest::fromJsonValue(m_sort_value, json[QString("sort_value")]);
    m_sort_value_isSet = !json[QString("sort_value")].isNull() && m_sort_value_isValid;

    m_format_type_isValid = ::dc_rest::fromJsonValue(m_format_type, json[QString("format_type")]);
    m_format_type_isSet = !json[QString("format_type")].isNull() && m_format_type_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;
}

QString OAIGet_sticker_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGet_sticker_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_tags_isSet) {
        obj.insert(QString("tags"), ::dc_rest::toJsonValue(m_tags));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_available_isSet) {
        obj.insert(QString("available"), ::dc_rest::toJsonValue(m_available));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_pack_id_isSet) {
        obj.insert(QString("pack_id"), ::dc_rest::toJsonValue(m_pack_id));
    }
    if (m_sort_value_isSet) {
        obj.insert(QString("sort_value"), ::dc_rest::toJsonValue(m_sort_value));
    }
    if (m_format_type_isSet) {
        obj.insert(QString("format_type"), ::dc_rest::toJsonValue(m_format_type));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    return obj;
}

QString OAIGet_sticker_200_response::getId() const {
    return m_id;
}
void OAIGet_sticker_200_response::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGet_sticker_200_response::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGet_sticker_200_response::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIGet_sticker_200_response::getName() const {
    return m_name;
}
void OAIGet_sticker_200_response::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGet_sticker_200_response::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGet_sticker_200_response::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIGet_sticker_200_response::getTags() const {
    return m_tags;
}
void OAIGet_sticker_200_response::setTags(const QString &tags) {
    m_tags = tags;
    m_tags_isSet = true;
}

bool OAIGet_sticker_200_response::is_tags_Set() const{
    return m_tags_isSet;
}

bool OAIGet_sticker_200_response::is_tags_Valid() const{
    return m_tags_isValid;
}

qint32 OAIGet_sticker_200_response::getType() const {
    return m_type;
}
void OAIGet_sticker_200_response::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIGet_sticker_200_response::is_type_Set() const{
    return m_type_isSet;
}

bool OAIGet_sticker_200_response::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIGet_sticker_200_response::isAvailable() const {
    return m_available;
}
void OAIGet_sticker_200_response::setAvailable(const bool &available) {
    m_available = available;
    m_available_isSet = true;
}

bool OAIGet_sticker_200_response::is_available_Set() const{
    return m_available_isSet;
}

bool OAIGet_sticker_200_response::is_available_Valid() const{
    return m_available_isValid;
}

QString OAIGet_sticker_200_response::getGuildId() const {
    return m_guild_id;
}
void OAIGet_sticker_200_response::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIGet_sticker_200_response::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIGet_sticker_200_response::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QString OAIGet_sticker_200_response::getPackId() const {
    return m_pack_id;
}
void OAIGet_sticker_200_response::setPackId(const QString &pack_id) {
    m_pack_id = pack_id;
    m_pack_id_isSet = true;
}

bool OAIGet_sticker_200_response::is_pack_id_Set() const{
    return m_pack_id_isSet;
}

bool OAIGet_sticker_200_response::is_pack_id_Valid() const{
    return m_pack_id_isValid;
}

qint32 OAIGet_sticker_200_response::getSortValue() const {
    return m_sort_value;
}
void OAIGet_sticker_200_response::setSortValue(const qint32 &sort_value) {
    m_sort_value = sort_value;
    m_sort_value_isSet = true;
}

bool OAIGet_sticker_200_response::is_sort_value_Set() const{
    return m_sort_value_isSet;
}

bool OAIGet_sticker_200_response::is_sort_value_Valid() const{
    return m_sort_value_isValid;
}

qint32 OAIGet_sticker_200_response::getFormatType() const {
    return m_format_type;
}
void OAIGet_sticker_200_response::setFormatType(const qint32 &format_type) {
    m_format_type = format_type;
    m_format_type_isSet = true;
}

bool OAIGet_sticker_200_response::is_format_type_Set() const{
    return m_format_type_isSet;
}

bool OAIGet_sticker_200_response::is_format_type_Valid() const{
    return m_format_type_isValid;
}

QString OAIGet_sticker_200_response::getDescription() const {
    return m_description;
}
void OAIGet_sticker_200_response::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIGet_sticker_200_response::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGet_sticker_200_response::is_description_Valid() const{
    return m_description_isValid;
}

OAIUserResponse OAIGet_sticker_200_response::getUser() const {
    return m_user;
}
void OAIGet_sticker_200_response::setUser(const OAIUserResponse &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIGet_sticker_200_response::is_user_Set() const{
    return m_user_isSet;
}

bool OAIGet_sticker_200_response::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIGet_sticker_200_response::isSet() const {
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

        if (m_tags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_available_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pack_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sort_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_format_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGet_sticker_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_tags_isValid && m_type_isValid && m_available_isValid && m_guild_id_isValid && m_pack_id_isValid && m_sort_value_isValid && true;
}

} // namespace dc_rest
