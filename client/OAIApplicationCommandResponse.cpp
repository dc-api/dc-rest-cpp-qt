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

#include "OAIApplicationCommandResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIApplicationCommandResponse::OAIApplicationCommandResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApplicationCommandResponse::OAIApplicationCommandResponse() {
    this->initializeModel();
}

OAIApplicationCommandResponse::~OAIApplicationCommandResponse() {}

void OAIApplicationCommandResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_application_id_isSet = false;
    m_application_id_isValid = false;

    m_version_isSet = false;
    m_version_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_default_member_permissions_isSet = false;
    m_default_member_permissions_isValid = false;

    m_name_localized_isSet = false;
    m_name_localized_isValid = false;

    m_name_localizations_isSet = false;
    m_name_localizations_isValid = false;

    m_description_localized_isSet = false;
    m_description_localized_isValid = false;

    m_description_localizations_isSet = false;
    m_description_localizations_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_dm_permission_isSet = false;
    m_dm_permission_isValid = false;

    m_contexts_isSet = false;
    m_contexts_isValid = false;

    m_integration_types_isSet = false;
    m_integration_types_isValid = false;

    m_options_isSet = false;
    m_options_isValid = false;

    m_nsfw_isSet = false;
    m_nsfw_isValid = false;
}

void OAIApplicationCommandResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApplicationCommandResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;

    m_version_isValid = ::dc_rest::fromJsonValue(m_version, json[QString("version")]);
    m_version_isSet = !json[QString("version")].isNull() && m_version_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_default_member_permissions_isValid = ::dc_rest::fromJsonValue(m_default_member_permissions, json[QString("default_member_permissions")]);
    m_default_member_permissions_isSet = !json[QString("default_member_permissions")].isNull() && m_default_member_permissions_isValid;

    m_name_localized_isValid = ::dc_rest::fromJsonValue(m_name_localized, json[QString("name_localized")]);
    m_name_localized_isSet = !json[QString("name_localized")].isNull() && m_name_localized_isValid;

    m_name_localizations_isValid = ::dc_rest::fromJsonValue(m_name_localizations, json[QString("name_localizations")]);
    m_name_localizations_isSet = !json[QString("name_localizations")].isNull() && m_name_localizations_isValid;

    m_description_localized_isValid = ::dc_rest::fromJsonValue(m_description_localized, json[QString("description_localized")]);
    m_description_localized_isSet = !json[QString("description_localized")].isNull() && m_description_localized_isValid;

    m_description_localizations_isValid = ::dc_rest::fromJsonValue(m_description_localizations, json[QString("description_localizations")]);
    m_description_localizations_isSet = !json[QString("description_localizations")].isNull() && m_description_localizations_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_dm_permission_isValid = ::dc_rest::fromJsonValue(m_dm_permission, json[QString("dm_permission")]);
    m_dm_permission_isSet = !json[QString("dm_permission")].isNull() && m_dm_permission_isValid;

    m_contexts_isValid = ::dc_rest::fromJsonValue(m_contexts, json[QString("contexts")]);
    m_contexts_isSet = !json[QString("contexts")].isNull() && m_contexts_isValid;

    m_integration_types_isValid = ::dc_rest::fromJsonValue(m_integration_types, json[QString("integration_types")]);
    m_integration_types_isSet = !json[QString("integration_types")].isNull() && m_integration_types_isValid;

    m_options_isValid = ::dc_rest::fromJsonValue(m_options, json[QString("options")]);
    m_options_isSet = !json[QString("options")].isNull() && m_options_isValid;

    m_nsfw_isValid = ::dc_rest::fromJsonValue(m_nsfw, json[QString("nsfw")]);
    m_nsfw_isSet = !json[QString("nsfw")].isNull() && m_nsfw_isValid;
}

QString OAIApplicationCommandResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApplicationCommandResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
    }
    if (m_version_isSet) {
        obj.insert(QString("version"), ::dc_rest::toJsonValue(m_version));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_default_member_permissions_isSet) {
        obj.insert(QString("default_member_permissions"), ::dc_rest::toJsonValue(m_default_member_permissions));
    }
    if (m_name_localized_isSet) {
        obj.insert(QString("name_localized"), ::dc_rest::toJsonValue(m_name_localized));
    }
    if (m_name_localizations.size() > 0) {
        obj.insert(QString("name_localizations"), ::dc_rest::toJsonValue(m_name_localizations));
    }
    if (m_description_localized_isSet) {
        obj.insert(QString("description_localized"), ::dc_rest::toJsonValue(m_description_localized));
    }
    if (m_description_localizations.size() > 0) {
        obj.insert(QString("description_localizations"), ::dc_rest::toJsonValue(m_description_localizations));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_dm_permission_isSet) {
        obj.insert(QString("dm_permission"), ::dc_rest::toJsonValue(m_dm_permission));
    }
    if (m_contexts.size() > 0) {
        obj.insert(QString("contexts"), ::dc_rest::toJsonValue(m_contexts));
    }
    if (m_integration_types.size() > 0) {
        obj.insert(QString("integration_types"), ::dc_rest::toJsonValue(m_integration_types));
    }
    if (m_options.size() > 0) {
        obj.insert(QString("options"), ::dc_rest::toJsonValue(m_options));
    }
    if (m_nsfw_isSet) {
        obj.insert(QString("nsfw"), ::dc_rest::toJsonValue(m_nsfw));
    }
    return obj;
}

QString OAIApplicationCommandResponse::getId() const {
    return m_id;
}
void OAIApplicationCommandResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIApplicationCommandResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIApplicationCommandResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIApplicationCommandResponse::getApplicationId() const {
    return m_application_id;
}
void OAIApplicationCommandResponse::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAIApplicationCommandResponse::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAIApplicationCommandResponse::is_application_id_Valid() const{
    return m_application_id_isValid;
}

QString OAIApplicationCommandResponse::getVersion() const {
    return m_version;
}
void OAIApplicationCommandResponse::setVersion(const QString &version) {
    m_version = version;
    m_version_isSet = true;
}

bool OAIApplicationCommandResponse::is_version_Set() const{
    return m_version_isSet;
}

bool OAIApplicationCommandResponse::is_version_Valid() const{
    return m_version_isValid;
}

qint32 OAIApplicationCommandResponse::getType() const {
    return m_type;
}
void OAIApplicationCommandResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIApplicationCommandResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIApplicationCommandResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIApplicationCommandResponse::getName() const {
    return m_name;
}
void OAIApplicationCommandResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIApplicationCommandResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIApplicationCommandResponse::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIApplicationCommandResponse::getDescription() const {
    return m_description;
}
void OAIApplicationCommandResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIApplicationCommandResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIApplicationCommandResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIApplicationCommandResponse::getDefaultMemberPermissions() const {
    return m_default_member_permissions;
}
void OAIApplicationCommandResponse::setDefaultMemberPermissions(const QString &default_member_permissions) {
    m_default_member_permissions = default_member_permissions;
    m_default_member_permissions_isSet = true;
}

bool OAIApplicationCommandResponse::is_default_member_permissions_Set() const{
    return m_default_member_permissions_isSet;
}

bool OAIApplicationCommandResponse::is_default_member_permissions_Valid() const{
    return m_default_member_permissions_isValid;
}

QString OAIApplicationCommandResponse::getNameLocalized() const {
    return m_name_localized;
}
void OAIApplicationCommandResponse::setNameLocalized(const QString &name_localized) {
    m_name_localized = name_localized;
    m_name_localized_isSet = true;
}

bool OAIApplicationCommandResponse::is_name_localized_Set() const{
    return m_name_localized_isSet;
}

bool OAIApplicationCommandResponse::is_name_localized_Valid() const{
    return m_name_localized_isValid;
}

QMap<QString, QString> OAIApplicationCommandResponse::getNameLocalizations() const {
    return m_name_localizations;
}
void OAIApplicationCommandResponse::setNameLocalizations(const QMap<QString, QString> &name_localizations) {
    m_name_localizations = name_localizations;
    m_name_localizations_isSet = true;
}

bool OAIApplicationCommandResponse::is_name_localizations_Set() const{
    return m_name_localizations_isSet;
}

bool OAIApplicationCommandResponse::is_name_localizations_Valid() const{
    return m_name_localizations_isValid;
}

QString OAIApplicationCommandResponse::getDescriptionLocalized() const {
    return m_description_localized;
}
void OAIApplicationCommandResponse::setDescriptionLocalized(const QString &description_localized) {
    m_description_localized = description_localized;
    m_description_localized_isSet = true;
}

bool OAIApplicationCommandResponse::is_description_localized_Set() const{
    return m_description_localized_isSet;
}

bool OAIApplicationCommandResponse::is_description_localized_Valid() const{
    return m_description_localized_isValid;
}

QMap<QString, QString> OAIApplicationCommandResponse::getDescriptionLocalizations() const {
    return m_description_localizations;
}
void OAIApplicationCommandResponse::setDescriptionLocalizations(const QMap<QString, QString> &description_localizations) {
    m_description_localizations = description_localizations;
    m_description_localizations_isSet = true;
}

bool OAIApplicationCommandResponse::is_description_localizations_Set() const{
    return m_description_localizations_isSet;
}

bool OAIApplicationCommandResponse::is_description_localizations_Valid() const{
    return m_description_localizations_isValid;
}

QString OAIApplicationCommandResponse::getGuildId() const {
    return m_guild_id;
}
void OAIApplicationCommandResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIApplicationCommandResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIApplicationCommandResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

bool OAIApplicationCommandResponse::isDmPermission() const {
    return m_dm_permission;
}
void OAIApplicationCommandResponse::setDmPermission(const bool &dm_permission) {
    m_dm_permission = dm_permission;
    m_dm_permission_isSet = true;
}

bool OAIApplicationCommandResponse::is_dm_permission_Set() const{
    return m_dm_permission_isSet;
}

bool OAIApplicationCommandResponse::is_dm_permission_Valid() const{
    return m_dm_permission_isValid;
}

QSet<qint32> OAIApplicationCommandResponse::getContexts() const {
    return m_contexts;
}
void OAIApplicationCommandResponse::setContexts(const QSet<qint32> &contexts) {
    m_contexts = contexts;
    m_contexts_isSet = true;
}

bool OAIApplicationCommandResponse::is_contexts_Set() const{
    return m_contexts_isSet;
}

bool OAIApplicationCommandResponse::is_contexts_Valid() const{
    return m_contexts_isValid;
}

QSet<qint32> OAIApplicationCommandResponse::getIntegrationTypes() const {
    return m_integration_types;
}
void OAIApplicationCommandResponse::setIntegrationTypes(const QSet<qint32> &integration_types) {
    m_integration_types = integration_types;
    m_integration_types_isSet = true;
}

bool OAIApplicationCommandResponse::is_integration_types_Set() const{
    return m_integration_types_isSet;
}

bool OAIApplicationCommandResponse::is_integration_types_Valid() const{
    return m_integration_types_isValid;
}

QList<OAIApplicationCommandResponse_options_inner> OAIApplicationCommandResponse::getOptions() const {
    return m_options;
}
void OAIApplicationCommandResponse::setOptions(const QList<OAIApplicationCommandResponse_options_inner> &options) {
    m_options = options;
    m_options_isSet = true;
}

bool OAIApplicationCommandResponse::is_options_Set() const{
    return m_options_isSet;
}

bool OAIApplicationCommandResponse::is_options_Valid() const{
    return m_options_isValid;
}

bool OAIApplicationCommandResponse::isNsfw() const {
    return m_nsfw;
}
void OAIApplicationCommandResponse::setNsfw(const bool &nsfw) {
    m_nsfw = nsfw;
    m_nsfw_isSet = true;
}

bool OAIApplicationCommandResponse::is_nsfw_Set() const{
    return m_nsfw_isSet;
}

bool OAIApplicationCommandResponse::is_nsfw_Valid() const{
    return m_nsfw_isValid;
}

bool OAIApplicationCommandResponse::isSet() const {
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

        if (m_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_member_permissions_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_localized_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_localizations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_localized_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_localizations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dm_permission_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_contexts.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_integration_types.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_options.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_nsfw_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApplicationCommandResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_application_id_isValid && m_version_isValid && m_type_isValid && m_name_isValid && m_description_isValid && true;
}

} // namespace dc_rest
