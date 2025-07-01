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

#include "OAIGuildTemplateResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildTemplateResponse::OAIGuildTemplateResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildTemplateResponse::OAIGuildTemplateResponse() {
    this->initializeModel();
}

OAIGuildTemplateResponse::~OAIGuildTemplateResponse() {}

void OAIGuildTemplateResponse::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_usage_count_isSet = false;
    m_usage_count_isValid = false;

    m_creator_id_isSet = false;
    m_creator_id_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_updated_at_isSet = false;
    m_updated_at_isValid = false;

    m_source_guild_id_isSet = false;
    m_source_guild_id_isValid = false;

    m_serialized_source_guild_isSet = false;
    m_serialized_source_guild_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_creator_isSet = false;
    m_creator_isValid = false;

    m_is_dirty_isSet = false;
    m_is_dirty_isValid = false;
}

void OAIGuildTemplateResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildTemplateResponse::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::dc_rest::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_usage_count_isValid = ::dc_rest::fromJsonValue(m_usage_count, json[QString("usage_count")]);
    m_usage_count_isSet = !json[QString("usage_count")].isNull() && m_usage_count_isValid;

    m_creator_id_isValid = ::dc_rest::fromJsonValue(m_creator_id, json[QString("creator_id")]);
    m_creator_id_isSet = !json[QString("creator_id")].isNull() && m_creator_id_isValid;

    m_created_at_isValid = ::dc_rest::fromJsonValue(m_created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_updated_at_isValid = ::dc_rest::fromJsonValue(m_updated_at, json[QString("updated_at")]);
    m_updated_at_isSet = !json[QString("updated_at")].isNull() && m_updated_at_isValid;

    m_source_guild_id_isValid = ::dc_rest::fromJsonValue(m_source_guild_id, json[QString("source_guild_id")]);
    m_source_guild_id_isSet = !json[QString("source_guild_id")].isNull() && m_source_guild_id_isValid;

    m_serialized_source_guild_isValid = ::dc_rest::fromJsonValue(m_serialized_source_guild, json[QString("serialized_source_guild")]);
    m_serialized_source_guild_isSet = !json[QString("serialized_source_guild")].isNull() && m_serialized_source_guild_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_creator_isValid = ::dc_rest::fromJsonValue(m_creator, json[QString("creator")]);
    m_creator_isSet = !json[QString("creator")].isNull() && m_creator_isValid;

    m_is_dirty_isValid = ::dc_rest::fromJsonValue(m_is_dirty, json[QString("is_dirty")]);
    m_is_dirty_isSet = !json[QString("is_dirty")].isNull() && m_is_dirty_isValid;
}

QString OAIGuildTemplateResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildTemplateResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::dc_rest::toJsonValue(m_code));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_usage_count_isSet) {
        obj.insert(QString("usage_count"), ::dc_rest::toJsonValue(m_usage_count));
    }
    if (m_creator_id_isSet) {
        obj.insert(QString("creator_id"), ::dc_rest::toJsonValue(m_creator_id));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::dc_rest::toJsonValue(m_created_at));
    }
    if (m_updated_at_isSet) {
        obj.insert(QString("updated_at"), ::dc_rest::toJsonValue(m_updated_at));
    }
    if (m_source_guild_id_isSet) {
        obj.insert(QString("source_guild_id"), ::dc_rest::toJsonValue(m_source_guild_id));
    }
    if (m_serialized_source_guild.isSet()) {
        obj.insert(QString("serialized_source_guild"), ::dc_rest::toJsonValue(m_serialized_source_guild));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_creator.isSet()) {
        obj.insert(QString("creator"), ::dc_rest::toJsonValue(m_creator));
    }
    if (m_is_dirty_isSet) {
        obj.insert(QString("is_dirty"), ::dc_rest::toJsonValue(m_is_dirty));
    }
    return obj;
}

QString OAIGuildTemplateResponse::getCode() const {
    return m_code;
}
void OAIGuildTemplateResponse::setCode(const QString &code) {
    m_code = code;
    m_code_isSet = true;
}

bool OAIGuildTemplateResponse::is_code_Set() const{
    return m_code_isSet;
}

bool OAIGuildTemplateResponse::is_code_Valid() const{
    return m_code_isValid;
}

QString OAIGuildTemplateResponse::getName() const {
    return m_name;
}
void OAIGuildTemplateResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGuildTemplateResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGuildTemplateResponse::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIGuildTemplateResponse::getUsageCount() const {
    return m_usage_count;
}
void OAIGuildTemplateResponse::setUsageCount(const qint32 &usage_count) {
    m_usage_count = usage_count;
    m_usage_count_isSet = true;
}

bool OAIGuildTemplateResponse::is_usage_count_Set() const{
    return m_usage_count_isSet;
}

bool OAIGuildTemplateResponse::is_usage_count_Valid() const{
    return m_usage_count_isValid;
}

QString OAIGuildTemplateResponse::getCreatorId() const {
    return m_creator_id;
}
void OAIGuildTemplateResponse::setCreatorId(const QString &creator_id) {
    m_creator_id = creator_id;
    m_creator_id_isSet = true;
}

bool OAIGuildTemplateResponse::is_creator_id_Set() const{
    return m_creator_id_isSet;
}

bool OAIGuildTemplateResponse::is_creator_id_Valid() const{
    return m_creator_id_isValid;
}

QDateTime OAIGuildTemplateResponse::getCreatedAt() const {
    return m_created_at;
}
void OAIGuildTemplateResponse::setCreatedAt(const QDateTime &created_at) {
    m_created_at = created_at;
    m_created_at_isSet = true;
}

bool OAIGuildTemplateResponse::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAIGuildTemplateResponse::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QDateTime OAIGuildTemplateResponse::getUpdatedAt() const {
    return m_updated_at;
}
void OAIGuildTemplateResponse::setUpdatedAt(const QDateTime &updated_at) {
    m_updated_at = updated_at;
    m_updated_at_isSet = true;
}

bool OAIGuildTemplateResponse::is_updated_at_Set() const{
    return m_updated_at_isSet;
}

bool OAIGuildTemplateResponse::is_updated_at_Valid() const{
    return m_updated_at_isValid;
}

QString OAIGuildTemplateResponse::getSourceGuildId() const {
    return m_source_guild_id;
}
void OAIGuildTemplateResponse::setSourceGuildId(const QString &source_guild_id) {
    m_source_guild_id = source_guild_id;
    m_source_guild_id_isSet = true;
}

bool OAIGuildTemplateResponse::is_source_guild_id_Set() const{
    return m_source_guild_id_isSet;
}

bool OAIGuildTemplateResponse::is_source_guild_id_Valid() const{
    return m_source_guild_id_isValid;
}

OAIGuildTemplateSnapshotResponse OAIGuildTemplateResponse::getSerializedSourceGuild() const {
    return m_serialized_source_guild;
}
void OAIGuildTemplateResponse::setSerializedSourceGuild(const OAIGuildTemplateSnapshotResponse &serialized_source_guild) {
    m_serialized_source_guild = serialized_source_guild;
    m_serialized_source_guild_isSet = true;
}

bool OAIGuildTemplateResponse::is_serialized_source_guild_Set() const{
    return m_serialized_source_guild_isSet;
}

bool OAIGuildTemplateResponse::is_serialized_source_guild_Valid() const{
    return m_serialized_source_guild_isValid;
}

QString OAIGuildTemplateResponse::getDescription() const {
    return m_description;
}
void OAIGuildTemplateResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIGuildTemplateResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGuildTemplateResponse::is_description_Valid() const{
    return m_description_isValid;
}

OAIUserResponse OAIGuildTemplateResponse::getCreator() const {
    return m_creator;
}
void OAIGuildTemplateResponse::setCreator(const OAIUserResponse &creator) {
    m_creator = creator;
    m_creator_isSet = true;
}

bool OAIGuildTemplateResponse::is_creator_Set() const{
    return m_creator_isSet;
}

bool OAIGuildTemplateResponse::is_creator_Valid() const{
    return m_creator_isValid;
}

bool OAIGuildTemplateResponse::isIsDirty() const {
    return m_is_dirty;
}
void OAIGuildTemplateResponse::setIsDirty(const bool &is_dirty) {
    m_is_dirty = is_dirty;
    m_is_dirty_isSet = true;
}

bool OAIGuildTemplateResponse::is_is_dirty_Set() const{
    return m_is_dirty_isSet;
}

bool OAIGuildTemplateResponse::is_is_dirty_Valid() const{
    return m_is_dirty_isValid;
}

bool OAIGuildTemplateResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_usage_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creator_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_source_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_serialized_source_guild.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creator.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_dirty_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildTemplateResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_name_isValid && m_usage_count_isValid && m_creator_id_isValid && m_created_at_isValid && m_updated_at_isValid && m_source_guild_id_isValid && m_serialized_source_guild_isValid && true;
}

} // namespace dc_rest
