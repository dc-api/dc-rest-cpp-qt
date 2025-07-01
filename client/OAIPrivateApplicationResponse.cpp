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

#include "OAIPrivateApplicationResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIPrivateApplicationResponse::OAIPrivateApplicationResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPrivateApplicationResponse::OAIPrivateApplicationResponse() {
    this->initializeModel();
}

OAIPrivateApplicationResponse::~OAIPrivateApplicationResponse() {}

void OAIPrivateApplicationResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_verify_key_isSet = false;
    m_verify_key_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_redirect_uris_isSet = false;
    m_redirect_uris_isValid = false;

    m_owner_isSet = false;
    m_owner_isValid = false;

    m_approximate_user_install_count_isSet = false;
    m_approximate_user_install_count_isValid = false;

    m_approximate_user_authorization_count_isSet = false;
    m_approximate_user_authorization_count_isValid = false;

    m_explicit_content_filter_isSet = false;
    m_explicit_content_filter_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_cover_image_isSet = false;
    m_cover_image_isValid = false;

    m_primary_sku_id_isSet = false;
    m_primary_sku_id_isValid = false;

    m_bot_isSet = false;
    m_bot_isValid = false;

    m_slug_isSet = false;
    m_slug_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_rpc_origins_isSet = false;
    m_rpc_origins_isValid = false;

    m_bot_public_isSet = false;
    m_bot_public_isValid = false;

    m_bot_require_code_grant_isSet = false;
    m_bot_require_code_grant_isValid = false;

    m_terms_of_service_url_isSet = false;
    m_terms_of_service_url_isValid = false;

    m_privacy_policy_url_isSet = false;
    m_privacy_policy_url_isValid = false;

    m_custom_install_url_isSet = false;
    m_custom_install_url_isValid = false;

    m_install_params_isSet = false;
    m_install_params_isValid = false;

    m_integration_types_config_isSet = false;
    m_integration_types_config_isValid = false;

    m_max_participants_isSet = false;
    m_max_participants_isValid = false;

    m_tags_isSet = false;
    m_tags_isValid = false;

    m_interactions_endpoint_url_isSet = false;
    m_interactions_endpoint_url_isValid = false;

    m_role_connections_verification_url_isSet = false;
    m_role_connections_verification_url_isValid = false;

    m_approximate_guild_count_isSet = false;
    m_approximate_guild_count_isValid = false;

    m_team_isSet = false;
    m_team_isValid = false;
}

void OAIPrivateApplicationResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPrivateApplicationResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_verify_key_isValid = ::dc_rest::fromJsonValue(m_verify_key, json[QString("verify_key")]);
    m_verify_key_isSet = !json[QString("verify_key")].isNull() && m_verify_key_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_redirect_uris_isValid = ::dc_rest::fromJsonValue(m_redirect_uris, json[QString("redirect_uris")]);
    m_redirect_uris_isSet = !json[QString("redirect_uris")].isNull() && m_redirect_uris_isValid;

    m_owner_isValid = ::dc_rest::fromJsonValue(m_owner, json[QString("owner")]);
    m_owner_isSet = !json[QString("owner")].isNull() && m_owner_isValid;

    m_approximate_user_install_count_isValid = ::dc_rest::fromJsonValue(m_approximate_user_install_count, json[QString("approximate_user_install_count")]);
    m_approximate_user_install_count_isSet = !json[QString("approximate_user_install_count")].isNull() && m_approximate_user_install_count_isValid;

    m_approximate_user_authorization_count_isValid = ::dc_rest::fromJsonValue(m_approximate_user_authorization_count, json[QString("approximate_user_authorization_count")]);
    m_approximate_user_authorization_count_isSet = !json[QString("approximate_user_authorization_count")].isNull() && m_approximate_user_authorization_count_isValid;

    m_explicit_content_filter_isValid = ::dc_rest::fromJsonValue(m_explicit_content_filter, json[QString("explicit_content_filter")]);
    m_explicit_content_filter_isSet = !json[QString("explicit_content_filter")].isNull() && m_explicit_content_filter_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_cover_image_isValid = ::dc_rest::fromJsonValue(m_cover_image, json[QString("cover_image")]);
    m_cover_image_isSet = !json[QString("cover_image")].isNull() && m_cover_image_isValid;

    m_primary_sku_id_isValid = ::dc_rest::fromJsonValue(m_primary_sku_id, json[QString("primary_sku_id")]);
    m_primary_sku_id_isSet = !json[QString("primary_sku_id")].isNull() && m_primary_sku_id_isValid;

    m_bot_isValid = ::dc_rest::fromJsonValue(m_bot, json[QString("bot")]);
    m_bot_isSet = !json[QString("bot")].isNull() && m_bot_isValid;

    m_slug_isValid = ::dc_rest::fromJsonValue(m_slug, json[QString("slug")]);
    m_slug_isSet = !json[QString("slug")].isNull() && m_slug_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_rpc_origins_isValid = ::dc_rest::fromJsonValue(m_rpc_origins, json[QString("rpc_origins")]);
    m_rpc_origins_isSet = !json[QString("rpc_origins")].isNull() && m_rpc_origins_isValid;

    m_bot_public_isValid = ::dc_rest::fromJsonValue(m_bot_public, json[QString("bot_public")]);
    m_bot_public_isSet = !json[QString("bot_public")].isNull() && m_bot_public_isValid;

    m_bot_require_code_grant_isValid = ::dc_rest::fromJsonValue(m_bot_require_code_grant, json[QString("bot_require_code_grant")]);
    m_bot_require_code_grant_isSet = !json[QString("bot_require_code_grant")].isNull() && m_bot_require_code_grant_isValid;

    m_terms_of_service_url_isValid = ::dc_rest::fromJsonValue(m_terms_of_service_url, json[QString("terms_of_service_url")]);
    m_terms_of_service_url_isSet = !json[QString("terms_of_service_url")].isNull() && m_terms_of_service_url_isValid;

    m_privacy_policy_url_isValid = ::dc_rest::fromJsonValue(m_privacy_policy_url, json[QString("privacy_policy_url")]);
    m_privacy_policy_url_isSet = !json[QString("privacy_policy_url")].isNull() && m_privacy_policy_url_isValid;

    m_custom_install_url_isValid = ::dc_rest::fromJsonValue(m_custom_install_url, json[QString("custom_install_url")]);
    m_custom_install_url_isSet = !json[QString("custom_install_url")].isNull() && m_custom_install_url_isValid;

    m_install_params_isValid = ::dc_rest::fromJsonValue(m_install_params, json[QString("install_params")]);
    m_install_params_isSet = !json[QString("install_params")].isNull() && m_install_params_isValid;

    m_integration_types_config_isValid = ::dc_rest::fromJsonValue(m_integration_types_config, json[QString("integration_types_config")]);
    m_integration_types_config_isSet = !json[QString("integration_types_config")].isNull() && m_integration_types_config_isValid;

    m_max_participants_isValid = ::dc_rest::fromJsonValue(m_max_participants, json[QString("max_participants")]);
    m_max_participants_isSet = !json[QString("max_participants")].isNull() && m_max_participants_isValid;

    m_tags_isValid = ::dc_rest::fromJsonValue(m_tags, json[QString("tags")]);
    m_tags_isSet = !json[QString("tags")].isNull() && m_tags_isValid;

    m_interactions_endpoint_url_isValid = ::dc_rest::fromJsonValue(m_interactions_endpoint_url, json[QString("interactions_endpoint_url")]);
    m_interactions_endpoint_url_isSet = !json[QString("interactions_endpoint_url")].isNull() && m_interactions_endpoint_url_isValid;

    m_role_connections_verification_url_isValid = ::dc_rest::fromJsonValue(m_role_connections_verification_url, json[QString("role_connections_verification_url")]);
    m_role_connections_verification_url_isSet = !json[QString("role_connections_verification_url")].isNull() && m_role_connections_verification_url_isValid;

    m_approximate_guild_count_isValid = ::dc_rest::fromJsonValue(m_approximate_guild_count, json[QString("approximate_guild_count")]);
    m_approximate_guild_count_isSet = !json[QString("approximate_guild_count")].isNull() && m_approximate_guild_count_isValid;

    m_team_isValid = ::dc_rest::fromJsonValue(m_team, json[QString("team")]);
    m_team_isSet = !json[QString("team")].isNull() && m_team_isValid;
}

QString OAIPrivateApplicationResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPrivateApplicationResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_verify_key_isSet) {
        obj.insert(QString("verify_key"), ::dc_rest::toJsonValue(m_verify_key));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_redirect_uris.size() > 0) {
        obj.insert(QString("redirect_uris"), ::dc_rest::toJsonValue(m_redirect_uris));
    }
    if (m_owner.isSet()) {
        obj.insert(QString("owner"), ::dc_rest::toJsonValue(m_owner));
    }
    if (m_approximate_user_install_count_isSet) {
        obj.insert(QString("approximate_user_install_count"), ::dc_rest::toJsonValue(m_approximate_user_install_count));
    }
    if (m_approximate_user_authorization_count_isSet) {
        obj.insert(QString("approximate_user_authorization_count"), ::dc_rest::toJsonValue(m_approximate_user_authorization_count));
    }
    if (m_explicit_content_filter_isSet) {
        obj.insert(QString("explicit_content_filter"), ::dc_rest::toJsonValue(m_explicit_content_filter));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_cover_image_isSet) {
        obj.insert(QString("cover_image"), ::dc_rest::toJsonValue(m_cover_image));
    }
    if (m_primary_sku_id_isSet) {
        obj.insert(QString("primary_sku_id"), ::dc_rest::toJsonValue(m_primary_sku_id));
    }
    if (m_bot.isSet()) {
        obj.insert(QString("bot"), ::dc_rest::toJsonValue(m_bot));
    }
    if (m_slug_isSet) {
        obj.insert(QString("slug"), ::dc_rest::toJsonValue(m_slug));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_rpc_origins.size() > 0) {
        obj.insert(QString("rpc_origins"), ::dc_rest::toJsonValue(m_rpc_origins));
    }
    if (m_bot_public_isSet) {
        obj.insert(QString("bot_public"), ::dc_rest::toJsonValue(m_bot_public));
    }
    if (m_bot_require_code_grant_isSet) {
        obj.insert(QString("bot_require_code_grant"), ::dc_rest::toJsonValue(m_bot_require_code_grant));
    }
    if (m_terms_of_service_url_isSet) {
        obj.insert(QString("terms_of_service_url"), ::dc_rest::toJsonValue(m_terms_of_service_url));
    }
    if (m_privacy_policy_url_isSet) {
        obj.insert(QString("privacy_policy_url"), ::dc_rest::toJsonValue(m_privacy_policy_url));
    }
    if (m_custom_install_url_isSet) {
        obj.insert(QString("custom_install_url"), ::dc_rest::toJsonValue(m_custom_install_url));
    }
    if (m_install_params.isSet()) {
        obj.insert(QString("install_params"), ::dc_rest::toJsonValue(m_install_params));
    }
    if (m_integration_types_config.size() > 0) {
        obj.insert(QString("integration_types_config"), ::dc_rest::toJsonValue(m_integration_types_config));
    }
    if (m_max_participants_isSet) {
        obj.insert(QString("max_participants"), ::dc_rest::toJsonValue(m_max_participants));
    }
    if (m_tags.size() > 0) {
        obj.insert(QString("tags"), ::dc_rest::toJsonValue(m_tags));
    }
    if (m_interactions_endpoint_url_isSet) {
        obj.insert(QString("interactions_endpoint_url"), ::dc_rest::toJsonValue(m_interactions_endpoint_url));
    }
    if (m_role_connections_verification_url_isSet) {
        obj.insert(QString("role_connections_verification_url"), ::dc_rest::toJsonValue(m_role_connections_verification_url));
    }
    if (m_approximate_guild_count_isSet) {
        obj.insert(QString("approximate_guild_count"), ::dc_rest::toJsonValue(m_approximate_guild_count));
    }
    if (m_team.isSet()) {
        obj.insert(QString("team"), ::dc_rest::toJsonValue(m_team));
    }
    return obj;
}

QString OAIPrivateApplicationResponse::getId() const {
    return m_id;
}
void OAIPrivateApplicationResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIPrivateApplicationResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIPrivateApplicationResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIPrivateApplicationResponse::getName() const {
    return m_name;
}
void OAIPrivateApplicationResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIPrivateApplicationResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIPrivateApplicationResponse::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIPrivateApplicationResponse::getDescription() const {
    return m_description;
}
void OAIPrivateApplicationResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIPrivateApplicationResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIPrivateApplicationResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIPrivateApplicationResponse::getVerifyKey() const {
    return m_verify_key;
}
void OAIPrivateApplicationResponse::setVerifyKey(const QString &verify_key) {
    m_verify_key = verify_key;
    m_verify_key_isSet = true;
}

bool OAIPrivateApplicationResponse::is_verify_key_Set() const{
    return m_verify_key_isSet;
}

bool OAIPrivateApplicationResponse::is_verify_key_Valid() const{
    return m_verify_key_isValid;
}

qint32 OAIPrivateApplicationResponse::getFlags() const {
    return m_flags;
}
void OAIPrivateApplicationResponse::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIPrivateApplicationResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIPrivateApplicationResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

QList<QString> OAIPrivateApplicationResponse::getRedirectUris() const {
    return m_redirect_uris;
}
void OAIPrivateApplicationResponse::setRedirectUris(const QList<QString> &redirect_uris) {
    m_redirect_uris = redirect_uris;
    m_redirect_uris_isSet = true;
}

bool OAIPrivateApplicationResponse::is_redirect_uris_Set() const{
    return m_redirect_uris_isSet;
}

bool OAIPrivateApplicationResponse::is_redirect_uris_Valid() const{
    return m_redirect_uris_isValid;
}

OAIUserResponse OAIPrivateApplicationResponse::getOwner() const {
    return m_owner;
}
void OAIPrivateApplicationResponse::setOwner(const OAIUserResponse &owner) {
    m_owner = owner;
    m_owner_isSet = true;
}

bool OAIPrivateApplicationResponse::is_owner_Set() const{
    return m_owner_isSet;
}

bool OAIPrivateApplicationResponse::is_owner_Valid() const{
    return m_owner_isValid;
}

qint32 OAIPrivateApplicationResponse::getApproximateUserInstallCount() const {
    return m_approximate_user_install_count;
}
void OAIPrivateApplicationResponse::setApproximateUserInstallCount(const qint32 &approximate_user_install_count) {
    m_approximate_user_install_count = approximate_user_install_count;
    m_approximate_user_install_count_isSet = true;
}

bool OAIPrivateApplicationResponse::is_approximate_user_install_count_Set() const{
    return m_approximate_user_install_count_isSet;
}

bool OAIPrivateApplicationResponse::is_approximate_user_install_count_Valid() const{
    return m_approximate_user_install_count_isValid;
}

qint32 OAIPrivateApplicationResponse::getApproximateUserAuthorizationCount() const {
    return m_approximate_user_authorization_count;
}
void OAIPrivateApplicationResponse::setApproximateUserAuthorizationCount(const qint32 &approximate_user_authorization_count) {
    m_approximate_user_authorization_count = approximate_user_authorization_count;
    m_approximate_user_authorization_count_isSet = true;
}

bool OAIPrivateApplicationResponse::is_approximate_user_authorization_count_Set() const{
    return m_approximate_user_authorization_count_isSet;
}

bool OAIPrivateApplicationResponse::is_approximate_user_authorization_count_Valid() const{
    return m_approximate_user_authorization_count_isValid;
}

qint32 OAIPrivateApplicationResponse::getExplicitContentFilter() const {
    return m_explicit_content_filter;
}
void OAIPrivateApplicationResponse::setExplicitContentFilter(const qint32 &explicit_content_filter) {
    m_explicit_content_filter = explicit_content_filter;
    m_explicit_content_filter_isSet = true;
}

bool OAIPrivateApplicationResponse::is_explicit_content_filter_Set() const{
    return m_explicit_content_filter_isSet;
}

bool OAIPrivateApplicationResponse::is_explicit_content_filter_Valid() const{
    return m_explicit_content_filter_isValid;
}

QString OAIPrivateApplicationResponse::getIcon() const {
    return m_icon;
}
void OAIPrivateApplicationResponse::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIPrivateApplicationResponse::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIPrivateApplicationResponse::is_icon_Valid() const{
    return m_icon_isValid;
}

qint32 OAIPrivateApplicationResponse::getType() const {
    return m_type;
}
void OAIPrivateApplicationResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIPrivateApplicationResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIPrivateApplicationResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIPrivateApplicationResponse::getCoverImage() const {
    return m_cover_image;
}
void OAIPrivateApplicationResponse::setCoverImage(const QString &cover_image) {
    m_cover_image = cover_image;
    m_cover_image_isSet = true;
}

bool OAIPrivateApplicationResponse::is_cover_image_Set() const{
    return m_cover_image_isSet;
}

bool OAIPrivateApplicationResponse::is_cover_image_Valid() const{
    return m_cover_image_isValid;
}

QString OAIPrivateApplicationResponse::getPrimarySkuId() const {
    return m_primary_sku_id;
}
void OAIPrivateApplicationResponse::setPrimarySkuId(const QString &primary_sku_id) {
    m_primary_sku_id = primary_sku_id;
    m_primary_sku_id_isSet = true;
}

bool OAIPrivateApplicationResponse::is_primary_sku_id_Set() const{
    return m_primary_sku_id_isSet;
}

bool OAIPrivateApplicationResponse::is_primary_sku_id_Valid() const{
    return m_primary_sku_id_isValid;
}

OAIUserResponse OAIPrivateApplicationResponse::getBot() const {
    return m_bot;
}
void OAIPrivateApplicationResponse::setBot(const OAIUserResponse &bot) {
    m_bot = bot;
    m_bot_isSet = true;
}

bool OAIPrivateApplicationResponse::is_bot_Set() const{
    return m_bot_isSet;
}

bool OAIPrivateApplicationResponse::is_bot_Valid() const{
    return m_bot_isValid;
}

QString OAIPrivateApplicationResponse::getSlug() const {
    return m_slug;
}
void OAIPrivateApplicationResponse::setSlug(const QString &slug) {
    m_slug = slug;
    m_slug_isSet = true;
}

bool OAIPrivateApplicationResponse::is_slug_Set() const{
    return m_slug_isSet;
}

bool OAIPrivateApplicationResponse::is_slug_Valid() const{
    return m_slug_isValid;
}

QString OAIPrivateApplicationResponse::getGuildId() const {
    return m_guild_id;
}
void OAIPrivateApplicationResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIPrivateApplicationResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIPrivateApplicationResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QList<QString> OAIPrivateApplicationResponse::getRpcOrigins() const {
    return m_rpc_origins;
}
void OAIPrivateApplicationResponse::setRpcOrigins(const QList<QString> &rpc_origins) {
    m_rpc_origins = rpc_origins;
    m_rpc_origins_isSet = true;
}

bool OAIPrivateApplicationResponse::is_rpc_origins_Set() const{
    return m_rpc_origins_isSet;
}

bool OAIPrivateApplicationResponse::is_rpc_origins_Valid() const{
    return m_rpc_origins_isValid;
}

bool OAIPrivateApplicationResponse::isBotPublic() const {
    return m_bot_public;
}
void OAIPrivateApplicationResponse::setBotPublic(const bool &bot_public) {
    m_bot_public = bot_public;
    m_bot_public_isSet = true;
}

bool OAIPrivateApplicationResponse::is_bot_public_Set() const{
    return m_bot_public_isSet;
}

bool OAIPrivateApplicationResponse::is_bot_public_Valid() const{
    return m_bot_public_isValid;
}

bool OAIPrivateApplicationResponse::isBotRequireCodeGrant() const {
    return m_bot_require_code_grant;
}
void OAIPrivateApplicationResponse::setBotRequireCodeGrant(const bool &bot_require_code_grant) {
    m_bot_require_code_grant = bot_require_code_grant;
    m_bot_require_code_grant_isSet = true;
}

bool OAIPrivateApplicationResponse::is_bot_require_code_grant_Set() const{
    return m_bot_require_code_grant_isSet;
}

bool OAIPrivateApplicationResponse::is_bot_require_code_grant_Valid() const{
    return m_bot_require_code_grant_isValid;
}

QString OAIPrivateApplicationResponse::getTermsOfServiceUrl() const {
    return m_terms_of_service_url;
}
void OAIPrivateApplicationResponse::setTermsOfServiceUrl(const QString &terms_of_service_url) {
    m_terms_of_service_url = terms_of_service_url;
    m_terms_of_service_url_isSet = true;
}

bool OAIPrivateApplicationResponse::is_terms_of_service_url_Set() const{
    return m_terms_of_service_url_isSet;
}

bool OAIPrivateApplicationResponse::is_terms_of_service_url_Valid() const{
    return m_terms_of_service_url_isValid;
}

QString OAIPrivateApplicationResponse::getPrivacyPolicyUrl() const {
    return m_privacy_policy_url;
}
void OAIPrivateApplicationResponse::setPrivacyPolicyUrl(const QString &privacy_policy_url) {
    m_privacy_policy_url = privacy_policy_url;
    m_privacy_policy_url_isSet = true;
}

bool OAIPrivateApplicationResponse::is_privacy_policy_url_Set() const{
    return m_privacy_policy_url_isSet;
}

bool OAIPrivateApplicationResponse::is_privacy_policy_url_Valid() const{
    return m_privacy_policy_url_isValid;
}

QString OAIPrivateApplicationResponse::getCustomInstallUrl() const {
    return m_custom_install_url;
}
void OAIPrivateApplicationResponse::setCustomInstallUrl(const QString &custom_install_url) {
    m_custom_install_url = custom_install_url;
    m_custom_install_url_isSet = true;
}

bool OAIPrivateApplicationResponse::is_custom_install_url_Set() const{
    return m_custom_install_url_isSet;
}

bool OAIPrivateApplicationResponse::is_custom_install_url_Valid() const{
    return m_custom_install_url_isValid;
}

OAIApplicationOAuth2InstallParamsResponse OAIPrivateApplicationResponse::getInstallParams() const {
    return m_install_params;
}
void OAIPrivateApplicationResponse::setInstallParams(const OAIApplicationOAuth2InstallParamsResponse &install_params) {
    m_install_params = install_params;
    m_install_params_isSet = true;
}

bool OAIPrivateApplicationResponse::is_install_params_Set() const{
    return m_install_params_isSet;
}

bool OAIPrivateApplicationResponse::is_install_params_Valid() const{
    return m_install_params_isValid;
}

QMap<QString, OAIApplicationIntegrationTypeConfigurationResponse> OAIPrivateApplicationResponse::getIntegrationTypesConfig() const {
    return m_integration_types_config;
}
void OAIPrivateApplicationResponse::setIntegrationTypesConfig(const QMap<QString, OAIApplicationIntegrationTypeConfigurationResponse> &integration_types_config) {
    m_integration_types_config = integration_types_config;
    m_integration_types_config_isSet = true;
}

bool OAIPrivateApplicationResponse::is_integration_types_config_Set() const{
    return m_integration_types_config_isSet;
}

bool OAIPrivateApplicationResponse::is_integration_types_config_Valid() const{
    return m_integration_types_config_isValid;
}

qint32 OAIPrivateApplicationResponse::getMaxParticipants() const {
    return m_max_participants;
}
void OAIPrivateApplicationResponse::setMaxParticipants(const qint32 &max_participants) {
    m_max_participants = max_participants;
    m_max_participants_isSet = true;
}

bool OAIPrivateApplicationResponse::is_max_participants_Set() const{
    return m_max_participants_isSet;
}

bool OAIPrivateApplicationResponse::is_max_participants_Valid() const{
    return m_max_participants_isValid;
}

QSet<QString> OAIPrivateApplicationResponse::getTags() const {
    return m_tags;
}
void OAIPrivateApplicationResponse::setTags(const QSet<QString> &tags) {
    m_tags = tags;
    m_tags_isSet = true;
}

bool OAIPrivateApplicationResponse::is_tags_Set() const{
    return m_tags_isSet;
}

bool OAIPrivateApplicationResponse::is_tags_Valid() const{
    return m_tags_isValid;
}

QString OAIPrivateApplicationResponse::getInteractionsEndpointUrl() const {
    return m_interactions_endpoint_url;
}
void OAIPrivateApplicationResponse::setInteractionsEndpointUrl(const QString &interactions_endpoint_url) {
    m_interactions_endpoint_url = interactions_endpoint_url;
    m_interactions_endpoint_url_isSet = true;
}

bool OAIPrivateApplicationResponse::is_interactions_endpoint_url_Set() const{
    return m_interactions_endpoint_url_isSet;
}

bool OAIPrivateApplicationResponse::is_interactions_endpoint_url_Valid() const{
    return m_interactions_endpoint_url_isValid;
}

QString OAIPrivateApplicationResponse::getRoleConnectionsVerificationUrl() const {
    return m_role_connections_verification_url;
}
void OAIPrivateApplicationResponse::setRoleConnectionsVerificationUrl(const QString &role_connections_verification_url) {
    m_role_connections_verification_url = role_connections_verification_url;
    m_role_connections_verification_url_isSet = true;
}

bool OAIPrivateApplicationResponse::is_role_connections_verification_url_Set() const{
    return m_role_connections_verification_url_isSet;
}

bool OAIPrivateApplicationResponse::is_role_connections_verification_url_Valid() const{
    return m_role_connections_verification_url_isValid;
}

qint32 OAIPrivateApplicationResponse::getApproximateGuildCount() const {
    return m_approximate_guild_count;
}
void OAIPrivateApplicationResponse::setApproximateGuildCount(const qint32 &approximate_guild_count) {
    m_approximate_guild_count = approximate_guild_count;
    m_approximate_guild_count_isSet = true;
}

bool OAIPrivateApplicationResponse::is_approximate_guild_count_Set() const{
    return m_approximate_guild_count_isSet;
}

bool OAIPrivateApplicationResponse::is_approximate_guild_count_Valid() const{
    return m_approximate_guild_count_isValid;
}

OAITeamResponse OAIPrivateApplicationResponse::getTeam() const {
    return m_team;
}
void OAIPrivateApplicationResponse::setTeam(const OAITeamResponse &team) {
    m_team = team;
    m_team_isSet = true;
}

bool OAIPrivateApplicationResponse::is_team_Set() const{
    return m_team_isSet;
}

bool OAIPrivateApplicationResponse::is_team_Valid() const{
    return m_team_isValid;
}

bool OAIPrivateApplicationResponse::isSet() const {
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

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_verify_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_redirect_uris.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_owner.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_user_install_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_user_authorization_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explicit_content_filter_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_primary_sku_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bot.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_slug_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rpc_origins.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_bot_public_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bot_require_code_grant_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_terms_of_service_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_privacy_policy_url_isSet) {
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

        if (m_integration_types_config.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_participants_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_interactions_endpoint_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_role_connections_verification_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_guild_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_team.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPrivateApplicationResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_description_isValid && m_verify_key_isValid && m_flags_isValid && m_redirect_uris_isValid && m_owner_isValid && m_approximate_user_install_count_isValid && m_approximate_user_authorization_count_isValid && m_explicit_content_filter_isValid && true;
}

} // namespace dc_rest
