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

#include "OAIApplicationFormPartial.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIApplicationFormPartial::OAIApplicationFormPartial(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApplicationFormPartial::OAIApplicationFormPartial() {
    this->initializeModel();
}

OAIApplicationFormPartial::~OAIApplicationFormPartial() {}

void OAIApplicationFormPartial::initializeModel() {

    m_description_isSet = false;
    m_description_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_cover_image_isSet = false;
    m_cover_image_isValid = false;

    m_team_id_isSet = false;
    m_team_id_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_interactions_endpoint_url_isSet = false;
    m_interactions_endpoint_url_isValid = false;

    m_explicit_content_filter_isSet = false;
    m_explicit_content_filter_isValid = false;

    m_max_participants_isSet = false;
    m_max_participants_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_tags_isSet = false;
    m_tags_isValid = false;

    m_custom_install_url_isSet = false;
    m_custom_install_url_isValid = false;

    m_install_params_isSet = false;
    m_install_params_isValid = false;

    m_role_connections_verification_url_isSet = false;
    m_role_connections_verification_url_isValid = false;

    m_integration_types_config_isSet = false;
    m_integration_types_config_isValid = false;
}

void OAIApplicationFormPartial::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApplicationFormPartial::fromJsonObject(QJsonObject json) {

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_cover_image_isValid = ::dc_rest::fromJsonValue(m_cover_image, json[QString("cover_image")]);
    m_cover_image_isSet = !json[QString("cover_image")].isNull() && m_cover_image_isValid;

    m_team_id_isValid = ::dc_rest::fromJsonValue(m_team_id, json[QString("team_id")]);
    m_team_id_isSet = !json[QString("team_id")].isNull() && m_team_id_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_interactions_endpoint_url_isValid = ::dc_rest::fromJsonValue(m_interactions_endpoint_url, json[QString("interactions_endpoint_url")]);
    m_interactions_endpoint_url_isSet = !json[QString("interactions_endpoint_url")].isNull() && m_interactions_endpoint_url_isValid;

    m_explicit_content_filter_isValid = ::dc_rest::fromJsonValue(m_explicit_content_filter, json[QString("explicit_content_filter")]);
    m_explicit_content_filter_isSet = !json[QString("explicit_content_filter")].isNull() && m_explicit_content_filter_isValid;

    m_max_participants_isValid = ::dc_rest::fromJsonValue(m_max_participants, json[QString("max_participants")]);
    m_max_participants_isSet = !json[QString("max_participants")].isNull() && m_max_participants_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_tags_isValid = ::dc_rest::fromJsonValue(m_tags, json[QString("tags")]);
    m_tags_isSet = !json[QString("tags")].isNull() && m_tags_isValid;

    m_custom_install_url_isValid = ::dc_rest::fromJsonValue(m_custom_install_url, json[QString("custom_install_url")]);
    m_custom_install_url_isSet = !json[QString("custom_install_url")].isNull() && m_custom_install_url_isValid;

    m_install_params_isValid = ::dc_rest::fromJsonValue(m_install_params, json[QString("install_params")]);
    m_install_params_isSet = !json[QString("install_params")].isNull() && m_install_params_isValid;

    m_role_connections_verification_url_isValid = ::dc_rest::fromJsonValue(m_role_connections_verification_url, json[QString("role_connections_verification_url")]);
    m_role_connections_verification_url_isSet = !json[QString("role_connections_verification_url")].isNull() && m_role_connections_verification_url_isValid;

    m_integration_types_config_isValid = ::dc_rest::fromJsonValue(m_integration_types_config, json[QString("integration_types_config")]);
    m_integration_types_config_isSet = !json[QString("integration_types_config")].isNull() && m_integration_types_config_isValid;
}

QString OAIApplicationFormPartial::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApplicationFormPartial::asJsonObject() const {
    QJsonObject obj;
    if (m_description.isSet()) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_cover_image_isSet) {
        obj.insert(QString("cover_image"), ::dc_rest::toJsonValue(m_cover_image));
    }
    if (m_team_id_isSet) {
        obj.insert(QString("team_id"), ::dc_rest::toJsonValue(m_team_id));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_interactions_endpoint_url_isSet) {
        obj.insert(QString("interactions_endpoint_url"), ::dc_rest::toJsonValue(m_interactions_endpoint_url));
    }
    if (m_explicit_content_filter_isSet) {
        obj.insert(QString("explicit_content_filter"), ::dc_rest::toJsonValue(m_explicit_content_filter));
    }
    if (m_max_participants_isSet) {
        obj.insert(QString("max_participants"), ::dc_rest::toJsonValue(m_max_participants));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_tags.size() > 0) {
        obj.insert(QString("tags"), ::dc_rest::toJsonValue(m_tags));
    }
    if (m_custom_install_url_isSet) {
        obj.insert(QString("custom_install_url"), ::dc_rest::toJsonValue(m_custom_install_url));
    }
    if (m_install_params.isSet()) {
        obj.insert(QString("install_params"), ::dc_rest::toJsonValue(m_install_params));
    }
    if (m_role_connections_verification_url_isSet) {
        obj.insert(QString("role_connections_verification_url"), ::dc_rest::toJsonValue(m_role_connections_verification_url));
    }
    if (m_integration_types_config.size() > 0) {
        obj.insert(QString("integration_types_config"), ::dc_rest::toJsonValue(m_integration_types_config));
    }
    return obj;
}

OAIApplicationFormPartial_description OAIApplicationFormPartial::getDescription() const {
    return m_description;
}
void OAIApplicationFormPartial::setDescription(const OAIApplicationFormPartial_description &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIApplicationFormPartial::is_description_Set() const{
    return m_description_isSet;
}

bool OAIApplicationFormPartial::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIApplicationFormPartial::getIcon() const {
    return m_icon;
}
void OAIApplicationFormPartial::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIApplicationFormPartial::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIApplicationFormPartial::is_icon_Valid() const{
    return m_icon_isValid;
}

QString OAIApplicationFormPartial::getCoverImage() const {
    return m_cover_image;
}
void OAIApplicationFormPartial::setCoverImage(const QString &cover_image) {
    m_cover_image = cover_image;
    m_cover_image_isSet = true;
}

bool OAIApplicationFormPartial::is_cover_image_Set() const{
    return m_cover_image_isSet;
}

bool OAIApplicationFormPartial::is_cover_image_Valid() const{
    return m_cover_image_isValid;
}

QString OAIApplicationFormPartial::getTeamId() const {
    return m_team_id;
}
void OAIApplicationFormPartial::setTeamId(const QString &team_id) {
    m_team_id = team_id;
    m_team_id_isSet = true;
}

bool OAIApplicationFormPartial::is_team_id_Set() const{
    return m_team_id_isSet;
}

bool OAIApplicationFormPartial::is_team_id_Valid() const{
    return m_team_id_isValid;
}

qint32 OAIApplicationFormPartial::getFlags() const {
    return m_flags;
}
void OAIApplicationFormPartial::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIApplicationFormPartial::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIApplicationFormPartial::is_flags_Valid() const{
    return m_flags_isValid;
}

QString OAIApplicationFormPartial::getInteractionsEndpointUrl() const {
    return m_interactions_endpoint_url;
}
void OAIApplicationFormPartial::setInteractionsEndpointUrl(const QString &interactions_endpoint_url) {
    m_interactions_endpoint_url = interactions_endpoint_url;
    m_interactions_endpoint_url_isSet = true;
}

bool OAIApplicationFormPartial::is_interactions_endpoint_url_Set() const{
    return m_interactions_endpoint_url_isSet;
}

bool OAIApplicationFormPartial::is_interactions_endpoint_url_Valid() const{
    return m_interactions_endpoint_url_isValid;
}

qint32 OAIApplicationFormPartial::getExplicitContentFilter() const {
    return m_explicit_content_filter;
}
void OAIApplicationFormPartial::setExplicitContentFilter(const qint32 &explicit_content_filter) {
    m_explicit_content_filter = explicit_content_filter;
    m_explicit_content_filter_isSet = true;
}

bool OAIApplicationFormPartial::is_explicit_content_filter_Set() const{
    return m_explicit_content_filter_isSet;
}

bool OAIApplicationFormPartial::is_explicit_content_filter_Valid() const{
    return m_explicit_content_filter_isValid;
}

qint32 OAIApplicationFormPartial::getMaxParticipants() const {
    return m_max_participants;
}
void OAIApplicationFormPartial::setMaxParticipants(const qint32 &max_participants) {
    m_max_participants = max_participants;
    m_max_participants_isSet = true;
}

bool OAIApplicationFormPartial::is_max_participants_Set() const{
    return m_max_participants_isSet;
}

bool OAIApplicationFormPartial::is_max_participants_Valid() const{
    return m_max_participants_isValid;
}

qint32 OAIApplicationFormPartial::getType() const {
    return m_type;
}
void OAIApplicationFormPartial::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIApplicationFormPartial::is_type_Set() const{
    return m_type_isSet;
}

bool OAIApplicationFormPartial::is_type_Valid() const{
    return m_type_isValid;
}

QSet<QString> OAIApplicationFormPartial::getTags() const {
    return m_tags;
}
void OAIApplicationFormPartial::setTags(const QSet<QString> &tags) {
    m_tags = tags;
    m_tags_isSet = true;
}

bool OAIApplicationFormPartial::is_tags_Set() const{
    return m_tags_isSet;
}

bool OAIApplicationFormPartial::is_tags_Valid() const{
    return m_tags_isValid;
}

QString OAIApplicationFormPartial::getCustomInstallUrl() const {
    return m_custom_install_url;
}
void OAIApplicationFormPartial::setCustomInstallUrl(const QString &custom_install_url) {
    m_custom_install_url = custom_install_url;
    m_custom_install_url_isSet = true;
}

bool OAIApplicationFormPartial::is_custom_install_url_Set() const{
    return m_custom_install_url_isSet;
}

bool OAIApplicationFormPartial::is_custom_install_url_Valid() const{
    return m_custom_install_url_isValid;
}

OAIApplicationOAuth2InstallParams OAIApplicationFormPartial::getInstallParams() const {
    return m_install_params;
}
void OAIApplicationFormPartial::setInstallParams(const OAIApplicationOAuth2InstallParams &install_params) {
    m_install_params = install_params;
    m_install_params_isSet = true;
}

bool OAIApplicationFormPartial::is_install_params_Set() const{
    return m_install_params_isSet;
}

bool OAIApplicationFormPartial::is_install_params_Valid() const{
    return m_install_params_isValid;
}

QString OAIApplicationFormPartial::getRoleConnectionsVerificationUrl() const {
    return m_role_connections_verification_url;
}
void OAIApplicationFormPartial::setRoleConnectionsVerificationUrl(const QString &role_connections_verification_url) {
    m_role_connections_verification_url = role_connections_verification_url;
    m_role_connections_verification_url_isSet = true;
}

bool OAIApplicationFormPartial::is_role_connections_verification_url_Set() const{
    return m_role_connections_verification_url_isSet;
}

bool OAIApplicationFormPartial::is_role_connections_verification_url_Valid() const{
    return m_role_connections_verification_url_isValid;
}

QMap<QString, OAIApplicationFormPartial_integration_types_config_value> OAIApplicationFormPartial::getIntegrationTypesConfig() const {
    return m_integration_types_config;
}
void OAIApplicationFormPartial::setIntegrationTypesConfig(const QMap<QString, OAIApplicationFormPartial_integration_types_config_value> &integration_types_config) {
    m_integration_types_config = integration_types_config;
    m_integration_types_config_isSet = true;
}

bool OAIApplicationFormPartial::is_integration_types_config_Set() const{
    return m_integration_types_config_isSet;
}

bool OAIApplicationFormPartial::is_integration_types_config_Valid() const{
    return m_integration_types_config_isValid;
}

bool OAIApplicationFormPartial::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_team_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_interactions_endpoint_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explicit_content_filter_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_participants_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_install_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_install_params.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_role_connections_verification_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_integration_types_config.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApplicationFormPartial::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
